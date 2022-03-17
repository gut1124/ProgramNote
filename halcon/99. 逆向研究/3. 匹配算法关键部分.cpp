// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_7FF8C6386F00(__int64 a1, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // r10
  _BYTE *v14; // r9
  _BYTE *v15; // rdi
  _BYTE *v16; // rsi
  bool v17; // cf
  unsigned __int8 v18; // dl
  int v19; // eax
  __int64 v21; // rsi
  unsigned int v22; // r13d
  __int64 v24; // r14
  int v25; // edi
  bool v26; // zf
  __int64 v27; // rbp
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // r11
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rsi
  bool v35; // zf
  int v36; // ebp
  int v37; // r15d
  int v38; // edx
  __int64 v40; // rcx
  int v41; // r11d
  __int64 v43; // rbx
  int v44; // ecx
  int v45; // ecx
  int v46; // ebx
  int v52; // r9d
  int v64; // ebx
  __int64 v65; // rdi
  __int64 *v66; // r14
  __int64 v67; // r13
  __int64 v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rbp
  bool v71; // zf
  __int64 v74; // r12
  __int64 v75; // rbp
  __int64 v77; // r9
  __int64 v79; // r11
  __int64 v82; // r8
  __int64 v83; // r10
  __int64 v84; // r15
  int v91; // edx
  int v92; // r9d
  char v100; // zf
  char v103; // pf
  __int64 v109; // r15
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rbp
  __int64 v113; // rdi
  __int64 v114; // r15
  __int64 v115; // r8
  __int64 v116; // r11
  int v122; // r11d
  int v123; // ebx
  _BYTE v127[32]; // [rsp+0h] [rbp-358h] BYREF
  __int64 v128; // [rsp+20h] [rbp-338h]
  __int64 v129; // [rsp+130h] [rbp-228h] BYREF
  __int64 v130; // [rsp+138h] [rbp-220h] BYREF
  __int64 v131[9]; // [rsp+140h] [rbp-218h] BYREF
  __int64 *v132; // [rsp+188h] [rbp-1D0h] BYREF
  __int64 v133; // [rsp+190h] [rbp-1C8h]
  __int64 v134; // [rsp+198h] [rbp-1C0h]
  __int64 v135; // [rsp+1A0h] [rbp-1B8h]
  __int64 v136; // [rsp+1A8h] [rbp-1B0h]
  __int64 v137; // [rsp+1B0h] [rbp-1A8h]
  __int64 v138; // [rsp+1B8h] [rbp-1A0h]
  __int64 v139; // [rsp+1C0h] [rbp-198h]
  __int64 v140; // [rsp+1C8h] [rbp-190h]
  __int64 v141; // [rsp+1D0h] [rbp-188h]
  __int64 v142; // [rsp+1D8h] [rbp-180h] BYREF
  __int64 *v143; // [rsp+1E0h] [rbp-178h]
  int v144; // [rsp+1E8h] [rbp-170h]
  int v145; // [rsp+1ECh] [rbp-16Ch]
  __int64 v146; // [rsp+1F0h] [rbp-168h]
  __int64 v147; // [rsp+1F8h] [rbp-160h] BYREF
  __int64 v148; // [rsp+200h] [rbp-158h]
  int *v149; // [rsp+208h] [rbp-150h]
  _QWORD *v150; // [rsp+210h] [rbp-148h]
  __int64 v151; // [rsp+218h] [rbp-140h]
  __int64 v152; // [rsp+220h] [rbp-138h]
  __int64 v153; // [rsp+228h] [rbp-130h]
  __int64 v154; // [rsp+230h] [rbp-128h]
  __int64 v155; // [rsp+238h] [rbp-120h]
  __int64 v156; // [rsp+240h] [rbp-118h]
  __int64 v157; // [rsp+248h] [rbp-110h]
  __int64 v158; // [rsp+250h] [rbp-108h]
  __int64 v159; // [rsp+258h] [rbp-100h]
  __int64 v160; // [rsp+260h] [rbp-F8h]
  __int64 v161; // [rsp+268h] [rbp-F0h]
  __int64 v162; // [rsp+270h] [rbp-E8h]
  __int64 v163; // [rsp+278h] [rbp-E0h]
  __int64 v164; // [rsp+280h] [rbp-D8h]
  __int64 v165; // [rsp+288h] [rbp-D0h]
  __int64 v166; // [rsp+290h] [rbp-C8h] BYREF
  __int64 v167; // [rsp+298h] [rbp-C0h] BYREF
  __int64 v168; // [rsp+2A0h] [rbp-B8h]
  __int64 v169; // [rsp+2A8h] [rbp-B0h] BYREF
  __int64 v170; // [rsp+2B0h] [rbp-A8h] BYREF
  __int64 v171; // [rsp+2B8h] [rbp-A0h] BYREF
  __int64 v172; // [rsp+2C0h] [rbp-98h] BYREF
  __int64 v173; // [rsp+2C8h] [rbp-90h] BYREF
  __int64 v174; // [rsp+2D0h] [rbp-88h] BYREF
  __int64 v175; // [rsp+2D8h] [rbp-80h] BYREF
  __int64 v176; // [rsp+2E0h] [rbp-78h] BYREF
  __int64 v177; // [rsp+2E8h] [rbp-70h]
  __int64 v178; // [rsp+2F0h] [rbp-68h] BYREF
  unsigned int v179; // [rsp+2F8h] [rbp-60h] BYREF
  char v180[4]; // [rsp+2FCh] [rbp-5Ch] BYREF
  __int64 v181; // [rsp+300h] [rbp-58h] BYREF
  __int64 v182[10]; // [rsp+308h] [rbp-50h] BYREF

  v5 = a1;
  if ( (unsigned int)HNoInpObj(a1, v180) != 2 || v180[0] == 1 )
  {
    result = HAccessGlVar(v5, 44, 1, (unsigned int)&v129, 0i64, 0i64, 0i64, 0i64);
    if ( (_DWORD)result == 2 )
      return (unsigned int)v129;
    return result;
  }
  v6 = 0i64;
  v181 = 0i64;
  v182[0] = 0i64;
  result = HPGetPElemH(v5, 1, (unsigned int)"L", -1, (__int64)&v181, (__int64)v182, 1);
  if ( (_DWORD)result != 2 )
    return result;
  v8 = v182[0];
  v9 = 0i64;
  if ( v182[0] <= 0 )
    goto LABEL_21;
  do
  {
    _RAX = *(_QWORD *)(v181 + 8 * v9);
    if ( *(_BYTE *)(_RAX + 200) )
    {
      HSetExtendedErrorInfoF(
        v5,
        0i64,
        "Shape model with index %I64d needs training (see operator 'train_generic_shape_model')",
        v9);
      return 8673i64;
    }
    if ( *(_BYTE *)(_RAX + 656) )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+280h]
        vmovsd  xmm1, cs:qword_7FF8C76F5280
        vucomisd xmm0, xmm1
      }
      if ( !__SETP__(*(_BYTE *)(_RAX + 656), 0) && !*(_BYTE *)(_RAX + 656) )
        goto LABEL_226;
      __asm
      {
        vmovsd  xmm1, qword ptr [rax+1D8h]
        vxorpd  xmm2, xmm2, xmm2
        vucomisd xmm1, xmm2
      }
      if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
      {
        __asm
        {
          vmovsd  xmm1, qword ptr [rax+1E0h]
          vxorpd  xmm2, xmm2, xmm2
          vucomisd xmm1, xmm2
        }
        if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
        {
          __asm
          {
            vmovsd  xmm1, qword ptr [rax+1E8h]
            vxorpd  xmm2, xmm2, xmm2
            vucomisd xmm1, xmm2
          }
          if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
          {
            __asm
            {
              vmovsd  xmm1, qword ptr [rax+1F0h]
              vxorpd  xmm2, xmm2, xmm2
              vucomisd xmm1, xmm2
            }
            if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
            {
              __asm
              {
                vmovsd  xmm1, qword ptr [rax+1F8h]
                vxorpd  xmm2, xmm2, xmm2
                vucomisd xmm1, xmm2
              }
              if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
              {
                __asm
                {
                  vmovsd  xmm1, qword ptr [rax+200h]
                  vxorpd  xmm2, xmm2, xmm2
                  vucomisd xmm1, xmm2
                }
                if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
                {
                  __asm
                  {
                    vmovsd  xmm1, qword ptr [rax+208h]
                    vxorpd  xmm2, xmm2, xmm2
                    vucomisd xmm1, xmm2
                  }
                  if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
                  {
                    __asm
                    {
                      vmovsd  xmm1, qword ptr [rax+210h]
                      vxorpd  xmm2, xmm2, xmm2
                      vucomisd xmm1, xmm2
                    }
                    if ( !*(_BYTE *)(_RAX + 656) && !__SETP__(*(_BYTE *)(_RAX + 656), 0) )
                    {
                      __asm
                      {
                        vmovsd  xmm1, qword ptr [rax+218h]
                        vxorpd  xmm2, xmm2, xmm2
                        vucomisd xmm1, xmm2
                      }
                      if ( !__SETP__(*(_BYTE *)(_RAX + 656), 0) && !*(_BYTE *)(_RAX + 656) )
                        goto LABEL_226;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( !*(_QWORD *)(_RAX + 464) )
      {
LABEL_226:
        HSetExtendedErrorInfoF(
          v5,
          0i64,
          "Shape model with index %I64d use_clutter is 'true', but clutter_contrast or clutter_hom_mat_2d are set to auto"
          " orclutter_region is not set",
          v9);
        return 8516i64;
      }
      __asm
      {
        vxorpd  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, dword ptr [rax+94h]
        vcomisd xmm1, xmm0
      }
      if ( *(_QWORD *)(_RAX + 464) )
      {
        HSetExtendedErrorInfoF(
          v5,
          0i64,
          "Shape model with index %I64d clutter contrast must not be smaller than min_contrast",
          v9);
        return 8518i64;
      }
    }
    ++v9;
  }
  while ( v9 < v182[0] );
  v11 = 0i64;
LABEL_9:
  v12 = v11 + 1;
  v13 = v11 + 1;
  if ( v11 + 1 >= v182[0] )
  {
LABEL_21:
    _RAX = v127;
    v21 = 0i64;
    v22 = 0;
    v178 = 0i64;
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    v24 = 0i64;
    __asm { vmovsd  qword ptr [rax+20h], xmm0 }
    v25 = 0;
    result = HAccessGlVar(v5, 7, 1, (unsigned int)&v178, v128, 0i64, 0i64, 1i64);
    v26 = (_DWORD)result == 2;
    if ( (_DWORD)result == 2 )
    {
      if ( v178 != 1 && v178 != v8 )
        return 1501i64;
      v145 = 0;
      result = HPNumOfChannels(v5, 1i64, 1i64);
      v26 = (_DWORD)result == 2;
      if ( (_DWORD)result == 2 )
      {
        if ( v145 <= 0 )
          return 9003i64;
        result = HPGetObj(v5, 1i64, 1i64, &v166);
        v26 = (_DWORD)result == 2;
        if ( (_DWORD)result != 2 )
          goto LABEL_195;
        if ( !v166 )
          return 9003i64;
        v164 = 0i64;
        v128 = 4827i64;
        result = HXAllocTmp();
        v26 = (_DWORD)result == 2;
        if ( (_DWORD)result == 2 )
        {
          v27 = 0i64;
          v28 = 0i64;
          if ( v145 <= 0 )
          {
LABEL_39:
            v148 = 0i64;
            v128 = 4857i64;
            result = HXAllocTmp();
            v26 = (_DWORD)result == 2;
            if ( (_DWORD)result == 2 )
            {
              v146 = 0i64;
              v128 = 4860i64;
              result = HXAllocTmp();
              v26 = (_DWORD)result == 2;
              if ( (_DWORD)result == 2 )
              {
                if ( (unsigned __int8)HCheckObjNum(v5, 1i64, 1i64) == 1 )
                {
                  v32 = 1i64;
                  v33 = 8i64;
                  while ( (unsigned int)HPGetObj(v5, 1i64, v32, &v166) == 2 && v166 )
                  {
                    result = HPGetFDRL(v5, v166, v33 + v148 - 8);
                    v26 = (_DWORD)result == 2;
                    if ( (_DWORD)result != 2 )
                      goto LABEL_195;
                    result = HPNumOfChannels(v5, 1i64, v32);
                    v26 = (_DWORD)result == 2;
                    if ( (_DWORD)result != 2 )
                      goto LABEL_195;
                    if ( v145 != v144 )
                      return 3122i64;
                    if ( v145 > 0 )
                    {
                      v129 = v21;
                      v34 = 0i64;
                      while ( 1 )
                      {
                        result = HPGetComp(v5, v166, (int)v34 + 1, &v147);
                        v35 = (_DWORD)result == 2;
                        if ( (_DWORD)result != 2 )
                          break;
                        if ( !v147 )
                          return 9003i64;
                        result = HPGetImage(v5, v147, v146 + v6);
                        v35 = (_DWORD)result == 2;
                        if ( (_DWORD)result != 2 )
                          break;
                        if ( *(_QWORD *)(v6 + v146 + 8) != *(_QWORD *)(v6 + v164 + 8) )
                          return 5206i64;
                        ++v34;
                        v6 += 64i64;
                        if ( v34 >= v145 )
                        {
                          v21 = v129;
                          v6 = 0i64;
                          goto LABEL_56;
                        }
                      }
                      v21 = v129;
                      if ( !v35 )
                        return result;
                      goto LABEL_59;
                    }
LABEL_56:
                    ++v32;
                    v33 += 8i64;
                    if ( (unsigned __int8)HCheckObjNum(v5, 1i64, v32) != 1 )
                      break;
                  }
                }
                result = HXFreeTmp(v5, v146, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 4888i64);
                v26 = (_DWORD)result == 2;
                if ( (_DWORD)result == 2 )
                {
                  v21 = v164;
                  v22 = v145;
                  v24 = v148;
                  v25 = v178;
                  goto LABEL_59;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              result = HPGetComp(v5, v166, (int)v27 + 1, &v167);
              v26 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                break;
              if ( !v167 )
                return 9003i64;
              result = HPGetImage(v5, v167, v164 + v28);
              v26 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                break;
              v29 = *(_DWORD *)(v164 + v28);
              if ( v29 != 1 && v29 != 1024 )
                return 9001i64;
              ++v27;
              v28 += 64i64;
              if ( v27 >= v145 )
              {
                v30 = 1i64;
                v31 = 64i64;
                if ( v145 <= 1i64 )
                  goto LABEL_39;
                while ( *(_DWORD *)(v31 + v164 - 64) == *(_DWORD *)(v31 + v164) )
                {
                  ++v30;
                  v31 += 64i64;
                  if ( v30 >= v145 )
                    goto LABEL_39;
                }
                return 9001i64;
              }
            }
          }
        }
      }
    }
LABEL_195:
    if ( !v26 )
      return result;
LABEL_59:
    v169 = 0i64;
    v170 = 0i64;
    v171 = 0i64;
    v172 = 0i64;
    v173 = 0i64;
    v174 = 0i64;
    v175 = 0i64;
    v176 = 0i64;
    v179 = 0;
    v177 = 0i64;
    v128 = 5702i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v168 = 0i64;
    v128 = 5704i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v165 = 0i64;
    v128 = 5707i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v163 = 0i64;
    v128 = 5709i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v162 = 0i64;
    v128 = 5711i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v161 = 0i64;
    v128 = 5713i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v160 = 0i64;
    v128 = 5715i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v159 = 0i64;
    v128 = 5717i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v158 = 0i64;
    v128 = 5719i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v157 = 0i64;
    v128 = 5721i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v156 = 0i64;
    v128 = 5723i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v151 = 0i64;
    v128 = 5725i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v152 = 0i64;
    v128 = 5727i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v153 = 0i64;
    v128 = 5730i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v154 = 0i64;
    v128 = 5732i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v155 = 0i64;
    v128 = 5734i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v36 = v182[0];
    v149 = 0i64;
    v128 = 5743i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v37 = v182[0];
    v150 = 0i64;
    v128 = 5747i64;
    result = HXAllocTmp();
    if ( (_DWORD)result != 2 )
      return result;
    v38 = v182[0];
    _R10 = 0i64;
    v40 = v181;
    v41 = (unsigned __int8)byte_7FF8C7BF57AC;
    if ( v182[0] > 0 )
    {
      __asm { vmovsd  xmm0, cs:qword_7FF8C76F5280 }
      v129 = v5;
      do
      {
        v43 = *(_QWORD *)(v40 + 8 * _R10);
        v44 = *(_DWORD *)(v43 + 436);
        if ( v44 > 0 )
          *(_DWORD *)(v177 + 4 * _R10) = v44;
        else
          *(_DWORD *)(v177 + 4 * _R10) = *(_DWORD *)(v43 + 8);
        v45 = *(_DWORD *)(v177 + 4 * _R10);
        if ( *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 8i64) < v45 )
          v45 = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 8i64);
        *(_DWORD *)(v177 + 4 * _R10) = v45;
        *(_DWORD *)(v168 + 4 * _R10) = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 12i64);
        v46 = --*(_DWORD *)(v168 + 4 * _R10);
        if ( *(_DWORD *)(v177 + 4 * _R10) - 1 < v46 )
          v46 = *(_DWORD *)(v177 + 4 * _R10) - 1;
        *(_DWORD *)(v168 + 4 * _R10) = v46;
        *(_BYTE *)(v165 + _R10) = *(_BYTE *)(*(_QWORD *)(v181 + 8 * _R10) + 432i64);
        *(_QWORD *)(v163 + 8 * _R10) = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 352i64);
        *(_QWORD *)(v162 + 8 * _R10) = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 360i64);
        _R8 = v161;
        _R11 = v160;
        _RCX = *(_QWORD *)(v181 + 8 * _R10);
        _RBX = v159;
        _RDX = v158;
        v52 = *(_DWORD *)(_RCX + 224);
        if ( v52 == 1 )
        {
          __asm
          {
            vmovsd  xmm2, qword ptr [rcx+170h]
            vucomisd xmm2, xmm0
          }
          if ( __SETP__(v52, 1) )
          {
            __asm
            {
              vmovsd  xmm1, qword ptr [rcx+30h]
              vmaxsd  xmm1, xmm1, xmm2
              vmovsd  qword ptr [r8+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(v161 + 8 * _R10) = *(_QWORD *)(_RCX + 48);
          }
          __asm
          {
            vmovsd  xmm1, qword ptr [rcx+178h]
            vucomisd xmm1, xmm0
          }
          if ( __SETP__(v52, 1) )
          {
            __asm
            {
              vminsd  xmm1, xmm1, qword ptr [rcx+38h]
              vmovsd  qword ptr [r11+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(_R11 + 8 * _R10) = *(_QWORD *)(_RCX + 56);
          }
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vxorpd  xmm2, xmm2, xmm2
            vmovsd  qword ptr [rbx+r10*8], xmm1
            vmovsd  qword ptr [rdx+r10*8], xmm2
          }
        }
        else if ( v52 == 2 )
        {
          __asm
          {
            vmovsd  xmm2, qword ptr [rcx+180h]
            vucomisd xmm2, xmm0
          }
          if ( __SETP__(v52, 2) )
          {
            __asm
            {
              vmovsd  xmm1, qword ptr [rcx+30h]
              vmaxsd  xmm1, xmm1, xmm2
              vmovsd  qword ptr [r8+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(v161 + 8 * _R10) = *(_QWORD *)(_RCX + 48);
          }
          __asm
          {
            vmovsd  xmm1, qword ptr [rcx+188h]
            vucomisd xmm1, xmm0
          }
          if ( __SETP__(v52, 2) )
          {
            __asm
            {
              vminsd  xmm1, xmm1, qword ptr [rcx+38h]
              vmovsd  qword ptr [r11+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(_R11 + 8 * _R10) = *(_QWORD *)(_RCX + 56);
          }
          __asm
          {
            vmovsd  xmm2, qword ptr [rcx+190h]
            vucomisd xmm2, xmm0
          }
          if ( __SETP__(v52, 2) )
          {
            __asm
            {
              vmovsd  xmm1, qword ptr [rcx+48h]
              vmaxsd  xmm1, xmm1, xmm2
              vmovsd  qword ptr [rbx+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(_RBX + 8 * _R10) = *(_QWORD *)(_RCX + 72);
          }
          __asm
          {
            vmovsd  xmm1, qword ptr [rcx+198h]
            vucomisd xmm1, xmm0
          }
          if ( __SETP__(v52, 2) )
          {
            __asm
            {
              vminsd  xmm1, xmm1, qword ptr [rcx+50h]
              vmovsd  qword ptr [rdx+r10*8], xmm1
            }
          }
          else
          {
            *(_QWORD *)(_RDX + 8 * _R10) = *(_QWORD *)(_RCX + 80);
          }
        }
        else
        {
          *(_QWORD *)(v161 + 8 * _R10) = 0x3FF0000000000000i64;
          *(_QWORD *)(_R11 + 8 * _R10) = 0x3FF0000000000000i64;
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  qword ptr [rbx+r10*8], xmm1
            vxorpd  xmm2, xmm2, xmm2
            vmovsd  qword ptr [rdx+r10*8], xmm2
          }
        }
        *(_QWORD *)(v157 + 8 * _R10) = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 328i64);
        *(_QWORD *)(v156 + 8 * _R10) = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 336i64);
        *(_QWORD *)(v151 + 8 * _R10) = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 344i64);
        *(_BYTE *)(v152 + _R10) = *(_BYTE *)(*(_QWORD *)(v181 + 8 * _R10) + 444i64);
        *(_BYTE *)(v153 + _R10) = *(_BYTE *)(*(_QWORD *)(v181 + 8 * _R10) + 445i64);
        *(_DWORD *)(v154 + 4 * _R10) = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 448i64);
        *(_DWORD *)(v155 + 4 * _R10) = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 452i64);
        if ( v36 == 1 )
        {
          if ( _R10 )
          {
            v122 = *v149;
            if ( *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 416i64) < *v149 )
              v122 = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 416i64);
            v123 = 1;
            if ( v122 > 1 )
              v123 = v122;
            *v149 = v123;
          }
          else
          {
            *v149 = *(_DWORD *)(*(_QWORD *)v181 + 416i64);
          }
        }
        else
        {
          v149[_R10] = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 416i64);
        }
        if ( v37 == 1 )
        {
          if ( _R10 )
          {
            _R11 = v150;
            __asm { vxorpd  xmm2, xmm2, xmm2 }
            _RBX = *(_QWORD *)(v181 + 8 * _R10);
            __asm
            {
              vmovsd  xmm1, qword ptr [rbx+1A8h]
              vminsd  xmm1, xmm1, qword ptr [r11]
              vmaxsd  xmm1, xmm1, xmm2
              vmovsd  qword ptr [r11], xmm1
            }
          }
          else
          {
            *v150 = *(_QWORD *)(*(_QWORD *)v181 + 424i64);
          }
        }
        else
        {
          v150[_R10] = *(_QWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 424i64);
        }
        v40 = v181;
        v64 = *(_DWORD *)(*(_QWORD *)(v181 + 8 * _R10) + 184i64);
        if ( v64 == -1 )
          v41 = (unsigned __int8)byte_7FF8C7BF57AC;
        else
          v41 = v64 == 1;
        ++_R10;
        v38 = v182[0];
      }
      while ( _R10 < v182[0] );
      v5 = v129;
    }
    LODWORD(v128) = v25;
    result = sub_7FF8C63B0840(
               v5,
               v21,
               v22,
               v24,
               v128,
               v40,
               v177,
               v168,
               v165,
               v163,
               v162,
               v161,
               v160,
               v159,
               v158,
               v157,
               v156,
               v151,
               v152,
               v153,
               v154,
               v155,
               v38,
               v149,
               v36,
               v150,
               v37,
               v41,
               &v169,
               &v170,
               &v171,
               &v172,
               &v173,
               &v174,
               &v175,
               &v176,
               &v179);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v150, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5867i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v149, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5868i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v155, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5869i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v154, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5870i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v153, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5871i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v152, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5872i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v151, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5873i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v156, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5874i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v157, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5875i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v158, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5876i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v159, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5877i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v160, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5878i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v161, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5879i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v162, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5880i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v163, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5881i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v165, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5882i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v168, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5883i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v177, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5884i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v24, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5888i64);
    if ( (_DWORD)result != 2 )
      return result;
    result = HXFreeTmp(v5, v21, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5889i64);
    if ( (_DWORD)result != 2 )
      return result;
    v132 = 0i64;
    result = HXAllocOutputHandle(v5, 1i64, &v132, &unk_7FF8C76F5700);
    if ( (_DWORD)result != 2 )
      return result;
    v65 = (int)v179;
    v135 = v174;
    v66 = v132;
    v138 = v170;
    v137 = v171;
    v67 = v181;
    v68 = v169;
    v69 = v172;
    v70 = v173;
    v136 = v175;
    v129 = v176;
    result = sub_7FF8C6399180(v5, v132, v179);
    v71 = (_DWORD)result == 2;
    if ( (_DWORD)result == 2 )
    {
      if ( v65 <= 0 )
      {
LABEL_168:
        v130 = (int)v179;
        result = HPPutElem(v5, 2, (unsigned int)&v130, 1, 1);
        if ( (_DWORD)result == 2 )
        {
          result = HXFreeLocal(v5, v176, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5904i64);
          if ( (_DWORD)result == 2 )
          {
            result = HXFreeLocal(v5, v175, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5905i64);
            if ( (_DWORD)result == 2 )
            {
              result = HXFreeLocal(v5, v174, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5906i64);
              if ( (_DWORD)result == 2 )
              {
                result = HXFreeLocal(v5, v173, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5907i64);
                if ( (_DWORD)result == 2 )
                {
                  result = HXFreeLocal(v5, v172, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5908i64);
                  if ( (_DWORD)result == 2 )
                  {
                    result = HXFreeLocal(v5, v171, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5909i64);
                    if ( (_DWORD)result == 2 )
                    {
                      result = HXFreeLocal(v5, v170, "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c", 5910i64);
                      if ( (_DWORD)result == 2 )
                      {
                        result = HXFreeLocal(
                                   v5,
                                   v169,
                                   "..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c",
                                   5911i64);
                        if ( (_DWORD)result == 2 )
                          return 2i64;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return result;
      }
      v143 = v66;
      _R14 = 0i64;
      v140 = v70;
      v141 = v69;
      v139 = v68;
      v134 = v65;
      _RDI = 0i64;
      v74 = v129;
      while ( 1 )
      {
        v75 = *v143;
        v128 = 0i64;
        _RSI = *(_QWORD *)(v75 + 8);
        v142 = 0i64;
        result = sub_7FF8C46D0B00(
                   v5,
                   4i64,
                   &v142,
                   *(_QWORD *)(*(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14)) + 744i64));
        v71 = (_DWORD)result == 2;
        if ( (_DWORD)result != 2 )
          break;
        v77 = v139;
        _RBP = _RSI + _RDI;
        *(_QWORD *)(_RBP + 184) = v142;
        v79 = v138;
        *(_QWORD *)(_RSI + _RDI) = *(_QWORD *)(v77 + 8 * _R14);
        _R8 = v137;
        *(_QWORD *)(_RBP + 8) = *(_QWORD *)(v79 + 8 * _R14);
        __asm { vmovsd  xmm0, qword ptr [r8+r14*8] }
        *(double *)&_XMM0 = sub_7FF8C65669C0();
        v82 = v141;
        __asm { vmovsd  qword ptr [rdi+rsi+10h], xmm0 }
        v83 = v140;
        *(_QWORD *)(_RDI + _RSI + 24) = *(_QWORD *)(v82 + 8 * _R14);
        v84 = v135;
        *(_QWORD *)(_RDI + _RSI + 32) = *(_QWORD *)(v83 + 8 * _R14);
        *(_QWORD *)(_RDI + _RSI + 40) = *(_QWORD *)(v84 + 8 * _R14);
        *(_QWORD *)(_RDI + _RSI + 48) = *(_QWORD *)(v136 + 8 * _R14);
        HHomMat2DIdentity(_RSI + _RDI + 64);
        _R8 = v127;
        __asm
        {
          vmovsd  xmm0, qword ptr [rdi+rsi+18h]
          vxorpd  xmm2, xmm2, xmm2
          vxorpd  xmm3, xmm3, xmm3
          vmovapd xmm1, xmm0
          vmovsd  qword ptr [r8+20h], xmm2
          vmovsd  xmm2, qword ptr [rdi+rsi+20h]
        }
        result = HHomMat2DScale((int)_RSI + (int)_RDI + 64, v91, (unsigned int)v127, v92, v128);
        v71 = (_DWORD)result == 2;
        if ( (_DWORD)result != 2 )
          break;
        __asm
        {
          vmovsd  xmm0, qword ptr [rdi+rsi+10h]
          vmovapd xmm1, xmm0
          vxorpd  xmm2, xmm2, xmm2
          vxorpd  xmm3, xmm3, xmm3
        }
        HHomMat2DRotate(_RSI + _RDI + 64);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbp+0]
          vmovsd  xmm2, qword ptr [rdi+rsi+8]
          vmovapd xmm1, xmm0
        }
        HHomMat2DTranslate(_RSI + _RDI + 64);
        *(double *)&_XMM0 = sub_7FF8C6CA7800(v131, _RSI + _RDI + 64);
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        _R8 = *(_BYTE **)(v67 + 8i64 * *(int *)(v74 + 4 * _R14));
        __asm
        {
          vmovsd  xmm3, qword ptr [r8+68h]
          vmovsd  xmm2, qword ptr [r8+70h]
          vucomisd xmm3, xmm0
        }
        if ( v103 )
          goto LABEL_149;
        if ( !v100 )
          goto LABEL_149;
        __asm
        {
          vxorpd  xmm0, xmm0, xmm0
          vucomisd xmm2, xmm0
        }
        if ( !v100 )
        {
LABEL_149:
          __asm
          {
            vmovsd  xmm0, [rsp+358h+var_218]
            vmovsd  xmm1, [rsp+358h+var_200]
            vfmsub213sd xmm0, xmm3, [rsp+358h+var_208]
            vfmsub213sd xmm3, xmm1, [rsp+358h+var_1F0]
            vfnmsub231sd xmm0, xmm2, [rsp+358h+var_210]
            vfnmsub231sd xmm3, xmm2, [rsp+358h+var_1F8]
            vmovsd  [rsp+358h+var_208], xmm0
            vmovsd  [rsp+358h+var_1F0], xmm3
          }
          _R8 = *(_BYTE **)(v67 + 8i64 * *(int *)(v74 + 4 * _R14));
        }
        if ( _R8[460] )
        {
          v109 = *(int *)(*(_QWORD *)(*(_QWORD *)_R8 + 80i64) + 8i64);
          v110 = 8 * v109;
          if ( HTraceMemory )
            result = HXAllocMemCheck(
                       v5,
                       v110,
                       (unsigned int)"..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c",
                       5066,
                       -112,
                       _RSI + _RDI + 112);
          else
            result = HXAlloc(v5, v110, _RSI + _RDI + 112);
          v71 = (_DWORD)result == 2;
          if ( (_DWORD)result != 2 )
            break;
          *(_DWORD *)(_RDI + _RSI + 120) = v109;
          if ( v109 > 0 )
          {
            v133 = _RSI;
            v111 = _RSI + _RDI;
            v130 = _RDI;
            v112 = 0i64;
            v113 = v109;
            v114 = 0i64;
            while ( 1 )
            {
              result = HXLDAffineTransCont(
                         v5,
                         *(_QWORD *)(**(_QWORD **)(**(_QWORD **)(v67 + 8i64 * *(int *)(v74 + 4 * _R14)) + 80i64) + v112),
                         v112 + *(_QWORD *)(v111 + 112),
                         v131);
              v71 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                goto LABEL_181;
              ++v114;
              v112 += 8i64;
              if ( v114 >= v113 )
              {
                _RSI = v133;
                _RDI = v130;
                break;
              }
            }
          }
        }
        HHomMat2DIdentity(_RSI + _RDI + 128);
        v115 = *(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14));
        if ( *(_QWORD *)(v115 + 464) )
        {
          if ( *(_BYTE *)(v115 + 656) )
          {
            sub_7FF8C6C89480(_RSI + _RDI + 128, v131, *(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14)) + 544i64);
            if ( *(_BYTE *)(*(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14)) + 461i64) )
            {
              v129 = 0i64;
              v116 = *(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14));
              v128 = 5101i64;
              result = HXAllocRLNumLocal(
                         v5,
                         (unsigned int)&v129,
                         *(_DWORD *)(*(_QWORD *)(v116 + 464) + 4i64),
                         (unsigned int)"..\\..\\source\\hlib\\matching\\CIPMatchShapeGeneric.c",
                         5101i64);
              v71 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                break;
              result = HRLRegionTransform(
                         v5,
                         *(_QWORD *)(*(_QWORD *)(v67 + 8i64 * *(int *)(v74 + 4 * _R14)) + 464i64),
                         &v129,
                         _RSI + _RDI + 128,
                         1,
                         0);
              v71 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                break;
              result = HConvertLocalToGlobal(v5, v129);
              v71 = (_DWORD)result == 2;
              if ( (_DWORD)result != 2 )
                break;
              *(_QWORD *)(_RDI + _RSI + 176) = v129;
            }
          }
        }
        ++_R14;
        _RDI += 192i64;
        if ( _R14 >= v134 )
          goto LABEL_168;
      }
    }
LABEL_181:
    if ( !v71 )
      return result;
    goto LABEL_168;
  }
  v14 = *(_BYTE **)(*(_QWORD *)(v181 + 8 * v11) + 744i64);
  while ( 1 )
  {
    v15 = v14;
    v16 = *(_BYTE **)(*(_QWORD *)(v181 + 8 * v12) + 744i64);
    while ( 1 )
    {
      v17 = *v15 < *v16;
      if ( *v15 != *v16 )
        break;
      if ( !*v15 )
        goto LABEL_16;
      v18 = v15[1];
      v17 = v18 < v16[1];
      if ( v18 != v16[1] )
        break;
      v15 += 2;
      v16 += 2;
      if ( !v18 )
      {
LABEL_16:
        v19 = 0;
        goto LABEL_18;
      }
    }
    v19 = v17 ? -1 : 1;
LABEL_18:
    if ( !v19 )
      return 8682i64;
    if ( ++v12 >= v182[0] )
    {
      v11 = v13;
      goto LABEL_9;
    }
  }
}