
HalconCpp::HHandleBase *__fastcall HalconCpp::HShapeModel::FindGenericShapeModel(
        const struct HalconCpp::HHandle *a1,
        HalconCpp::HHandleBase *a2,
        const struct HalconCpp::HObjectBase *a3,
        __int64 *a4)
{
  void *v8; // [rsp+28h] [rbp+8h]

  v8 = (void *)HalconCpp::HalconAPI::PreCall(0x8C6u);   //获取算子实例指针 v8=0x01C2 3869 8A00
  HalconCpp::HalconAPI::Store(v8, 0, a1);               //模板ID
  HalconCpp::HalconAPI::Store(v8, 1, a3);               //图像
  HalconCpp::HalconAPI::InitOutp(v8, 0);                //0:a2, 输出结果
  HalconCpp::HalconAPI::InitOutp(v8, 1);                //1:a4, 匹配数量
  HalconCpp::HalconAPI::CallProcedure(v8);              //执行算法,传入实例指针
  HalconCpp::HHandleBase::HHandleBase(a2);              //初始化句柄?
  *(_QWORD *)a2 = &HalconCpp::HGenericShapeModelResult::`vftable';
  HalconCpp::HalconAPI::Load(v8, 0, a2);                //提取输出结果
  HalconCpp::HalconAPI::Load(v8, 1, a4);                //提取匹配数量
  HalconCpp::HalconAPI::PostCall(v8, 2u);
  return a2;
}

__int64 __fastcall HalconCpp::HalconAPI::PreCall(unsigned int a1)
{
  unsigned int v2; // eax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = HCreateHProc(a1, v4);
  if ( v2 != 2 )  //license校验
  {
    HalconCpp::HOperatorException::Throw(a1, v2);
  }
  *(_BYTE *)(*(_QWORD *)(v4[0] + 40) + 4i64) = 1; //???
  return v4[0];   //返回地址
}


void __fastcall HalconCpp::HalconAPI::CallProcedure(void *a1)
{
  unsigned int v2; // ebp
  int v3; // ebx
  unsigned int v4; // edx

  v2 = CCallHProc();      //关键点,执行
  if ( v2 != 2 )
  {
    v3 = HPHGet_proc_index(a1);
    v4 = HDeleteHProc(a1, 0i64, v2);
    if ( v2 + v4 > 4 )
    {
      HalconCpp::HOperatorException::Throw(v3, v4);
      HalconCpp::HOperatorException::Throw(v3, v2);
    }
  }
}



__int64 __fastcall HPHGet_proc_index(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 24);
  else
    return 0xFFFFFFFFi64;
}


v3 = HPHGet_proc_index(a1);
v4 = HDeleteHProc(a1, 0i64, v2);

__int64 __fastcall halconcpp__PreCall_HalconAPI_HalconCpp__SAPEAXH_Z(unsigned int a1)
{
  unsigned int v2; // eax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = ((__int64 (__fastcall *)(_QWORD, __int64 *))halcon_HCreateHProc)(a1, v4);    //a1: 0x8C6u v4:
  if ( v2 != 2 )
    halconcpp__Throw_HOperatorException_HalconCpp__SAXHI_Z(a1, v2);
  *(_BYTE *)(*(_QWORD *)(v4[0] + 40) + 4i64) = 1;
  return v4[0];
}

//入参0x8C6u
__int64 __fastcall HCreateHProc(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 result; // rax
  __int64 Specific; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  _DWORD **v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rbx
  int *v15; // r8
  int v16; // ebx
  __int64 v17; // rax
  int *v18; // r11
  int v19; // r10d
  __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD **v23; // r14
  __int64 v24; // rax
  int *v25; // r11
  int v26; // r10d
  __int64 v27; // rdx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 v30; // rdx
  __int64 v31[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0i64;
  v5 = 1;
  *a2 = 0i64;
  sub_18308DB00(&unk_183C49940, sub_18080DAC0);

  //查询license 校验结果,非2则结果报错
  result = (unsigned int)dword_183C49948;
  if ( dword_183C49948 != 2 )
  {
    return result;
  }

  Specific = HpThreadGetSpecific((unsigned int)dword_183D15878);    //TlsGetValue
  v8 = Specific;
  if ( Specific )
  {
    v9 = *(_QWORD *)(Specific + 32);
    v10 = *(_DWORD *)(v9 + 2848);
    if ( !v10 )
    {
      *(_DWORD *)(v8 + 88) = 0;
      v31[0] = v8;
      ++*(_DWORD *)(v9 + 2848);
      result = sub_1807FEF00(v8, a1);
      v30 = v31[0];
      *(_DWORD *)(v31[0] + 88) = 1;
      *a2 = v30;
      **(_DWORD **)(v30 + 40) = 2;
      return result;
    }
    v4 = v8;
    *(_DWORD *)(v9 + 2848) = v10 + 1;
    v5 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 2848i64);
  }
  if ( dword_183D15778 )
  {
    v31[0] = v8;
    result = HpThreadMutexLock(&qword_183D15850);
    if ( (_DWORD)result != 2 )
      return result;
    v11 = (_DWORD **)qword_183D15858;
    if ( !qword_183D15858 )
    {
      result = HpThreadMutexUnlock(&qword_183D15850);
      if ( (_DWORD)result != 2 )
        return result;
      goto LABEL_9;
    }
    *a2 = qword_183D15858;
    *v11 = &unk_183C49920;
    v11[1] = off_183C49928;
    v17 = (__int64)v11[2];
    v31[0] = (__int64)v11;
    *off_183C49928 = v11;
    qword_183D15858 = v17;
    off_183C49928 = (void **)v11;
    HpThreadMutexLock(&unk_183E0ED28);
    ++*v11[10];
    v18 = v11[10];
    v19 = v18[1];
    if ( *v18 > v19 )
      v19 = *v18;
    v18[1] = v19;
    HpThreadMutexUnlock(&unk_183E0ED28);
    result = HpThreadMutexUnlock(&qword_183D15850);
    if ( (_DWORD)result == 2 )
    {
      v20 = v31[0];
      v21 = *(_DWORD **)(v31[0] + 32);
      *(_DWORD *)(v31[0] + 88) = 0;
      v21[712] = v5;
      result = sub_18080C800(v4, v20, a1);
      if ( (_DWORD)result == 2 )
      {
        v22 = (unsigned int)dword_183D15878;
        *(_DWORD *)(v31[0] + 88) = 1;
        result = HpThreadSetSpecific(v22);
        if ( (_DWORD)result == 2 )
        {
          result = 2i64;
          **(_DWORD **)(v31[0] + 40) = 2;
        }
      }
    }
  }
  else
  {
    v23 = (_DWORD **)qword_183D15858;
    if ( !qword_183D15858 )
    {
      v31[0] = v8;
LABEL_9:
      result = sub_180800E40(v31);
      if ( (_DWORD)result == 2 )
      {
        v12 = v31[0];
        *a2 = v31[0];
        *(_DWORD *)(*(_QWORD *)(v12 + 32) + 2848i64) = v5;
        v13 = sub_18080C800(v4, v12, a1);
        *(_DWORD *)(v31[0] + 88) = 1;
        result = HpThreadMutexLock(&qword_183D15850);
        if ( (_DWORD)result == 2 )
        {
          v14 = v31[0];
          *(_QWORD *)v31[0] = &unk_183C49920;
          *(_QWORD *)(v14 + 8) = off_183C49928;
          *off_183C49928 = (void *)v14;
          off_183C49928 = (void **)v14;
          HpThreadMutexLock(&unk_183E0ED28);
          ++**(_DWORD **)(v14 + 80);
          v15 = *(int **)(v14 + 80);
          v16 = v15[1];
          if ( *v15 > v16 )
            v16 = *v15;
          v15[1] = v16;
          HpThreadMutexUnlock(&unk_183E0ED28);
          result = HpThreadMutexUnlock(&qword_183D15850);
          if ( (_DWORD)result == 2 )
          {
            result = HpThreadSetSpecific((unsigned int)dword_183D15878);
            if ( (_DWORD)result == 2 )
            {
              result = v13;
              **(_DWORD **)(v31[0] + 40) = 2;
            }
          }
        }
      }
      return result;
    }
    *a2 = qword_183D15858;
    *v23 = &unk_183C49920;
    v23[1] = off_183C49928;
    v24 = (__int64)v23[2];
    v31[0] = (__int64)v23;
    *off_183C49928 = v23;
    qword_183D15858 = v24;
    off_183C49928 = (void **)v23;
    HpThreadMutexLock(&unk_183E0ED28);
    ++*v23[10];
    v25 = v23[10];
    v26 = v25[1];
    if ( *v25 > v26 )
      v26 = *v25;
    v25[1] = v26;
    HpThreadMutexUnlock(&unk_183E0ED28);
    v27 = v31[0];
    v28 = *(_DWORD **)(v31[0] + 32);
    *(_DWORD *)(v31[0] + 88) = 0;
    v28[712] = v5;
    result = sub_18080C800(v4, v27, a1);
    if ( (_DWORD)result == 2 )
    {
      v29 = *(_DWORD **)(v31[0] + 40);
      *(_DWORD *)(v31[0] + 88) = 1;
      result = 2i64;
      *v29 = 2;
    }
  }
  return result;
}

__int64 __fastcall halconcpp__PostCall_HalconAPI_HalconCpp__SAXPEAXI_Z(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax

  v4 = halcon_HPHGet_proc_index();        //0x8c6
  v5 = halcon_HDeleteHProc(a1, 0i64, a2); //0x02
  v6 = v5;
  result = a2 + v5;
  if ( (unsigned int)result > 4 )
  {
    halconcpp__Throw_HOperatorException_HalconCpp__SAXHI_Z(v4, v6);
    return halconcpp__Throw_HOperatorException_HalconCpp__SAXHI_Z(v4, a2);
  }
  return result;
}