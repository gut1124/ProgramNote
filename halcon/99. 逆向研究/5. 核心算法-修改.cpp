char *__fastcall sub_183101100(char *a1, char *a2, signed __int64 _R8)
{
  char *result; // rax
  __int64 v6; // r10
  char *v28; // rdx

  result = a1;
  _R12 = a2;
  _R13 = a1;
  switch ( _R8 )
  {
    case 0i64:
      goto LABEL_53;
    case 1i64:
LABEL_29:
      *_R13 = *_R12;
      goto LABEL_53;
    case 2i64:
LABEL_30:
      *(_WORD *)_R13 = *(_WORD *)_R12;
      goto LABEL_53;
    case 3i64:
LABEL_31:
      *(_WORD *)_R13 = *(_WORD *)_R12;
      _R13[2] = _R12[2];
      goto LABEL_53;
    case 4i64:
LABEL_32:
      *(_DWORD *)_R13 = *(_DWORD *)_R12;
      goto LABEL_53;
    case 5i64:
    case 6i64:
    case 7i64:
LABEL_33:
      *(_DWORD *)_R13 = *(_DWORD *)_R12;
      *(_DWORD *)&_R13[_R8 - 4] = *(_DWORD *)&_R12[_R8 - 4];
      goto LABEL_53;
    case 8i64:
LABEL_34:
      *(_QWORD *)_R13 = *(_QWORD *)_R12;
      goto LABEL_53;
    case 9i64:
    case 10i64:
    case 11i64:
    case 12i64:
    case 13i64:
    case 14i64:
    case 15i64:
LABEL_35:
      *(_QWORD *)_R13 = *(_QWORD *)_R12;
      *(_QWORD *)&_R13[_R8 - 8] = *(_QWORD *)&_R12[_R8 - 8];
      goto LABEL_53;
    case 16i64:
LABEL_36:
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]; jumptable 0000000183101127 case 16
        vmovups xmmword ptr [r13+0], xmm0
      }
      goto LABEL_53;
    case 17i64:
    case 18i64:
    case 19i64:
    case 20i64:
    case 21i64:
    case 22i64:
    case 23i64:
    case 24i64:
    case 25i64:
    case 26i64:
    case 27i64:
    case 28i64:
    case 29i64:
    case 30i64:
    case 31i64:
LABEL_37:
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]; jumptable 0000000183101127 cases 17-31
        vmovups xmmword ptr [r13+0], xmm0
        vmovups xmm0, xmmword ptr [r12+r8-10h]
        vmovups xmmword ptr [r13+r8-10h], xmm0
      }
      goto LABEL_53;
    case 32i64:
      goto LABEL_52;
    case 33i64:
    case 34i64:
    case 35i64:
    case 36i64:
    case 37i64:
    case 38i64:
    case 39i64:
    case 40i64:
    case 41i64:
    case 42i64:
    case 43i64:
    case 44i64:
    case 45i64:
    case 46i64:
    case 47i64:
    case 48i64:
    case 49i64:
    case 50i64:
    case 51i64:
    case 52i64:
    case 53i64:
    case 54i64:
    case 55i64:
    case 56i64:
    case 57i64:
    case 58i64:
    case 59i64:
    case 60i64:
    case 61i64:
    case 62i64:
    case 63i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 33-63
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 64i64:
      goto LABEL_51;
    case 65i64:
    case 66i64:
    case 67i64:
    case 68i64:
    case 69i64:
    case 70i64:
    case 71i64:
    case 72i64:
    case 73i64:
    case 74i64:
    case 75i64:
    case 76i64:
    case 77i64:
    case 78i64:
    case 79i64:
    case 80i64:
    case 81i64:
    case 82i64:
    case 83i64:
    case 84i64:
    case 85i64:
    case 86i64:
    case 87i64:
    case 88i64:
    case 89i64:
    case 90i64:
    case 91i64:
    case 92i64:
    case 93i64:
    case 94i64:
    case 95i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 65-95
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 96i64:
      goto LABEL_50;
    case 97i64:
    case 98i64:
    case 99i64:
    case 100i64:
    case 101i64:
    case 102i64:
    case 103i64:
    case 104i64:
    case 105i64:
    case 106i64:
    case 107i64:
    case 108i64:
    case 109i64:
    case 110i64:
    case 111i64:
    case 112i64:
    case 113i64:
    case 114i64:
    case 115i64:
    case 116i64:
    case 117i64:
    case 118i64:
    case 119i64:
    case 120i64:
    case 121i64:
    case 122i64:
    case 123i64:
    case 124i64:
    case 125i64:
    case 126i64:
    case 127i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 97-127
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+40h]
        vmovups ymmword ptr [r13+40h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 128i64:
      goto LABEL_49;
    case 129i64:
    case 130i64:
    case 131i64:
    case 132i64:
    case 133i64:
    case 134i64:
    case 135i64:
    case 136i64:
    case 137i64:
    case 138i64:
    case 139i64:
    case 140i64:
    case 141i64:
    case 142i64:
    case 143i64:
    case 144i64:
    case 145i64:
    case 146i64:
    case 147i64:
    case 148i64:
    case 149i64:
    case 150i64:
    case 151i64:
    case 152i64:
    case 153i64:
    case 154i64:
    case 155i64:
    case 156i64:
    case 157i64:
    case 158i64:
    case 159i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 129-159
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+40h]
        vmovups ymmword ptr [r13+40h], ymm0
        vmovups ymm0, ymmword ptr [r12+60h]
        vmovups ymmword ptr [r13+60h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 160i64:
      goto LABEL_48;
    case 161i64:
    case 162i64:
    case 163i64:
    case 164i64:
    case 165i64:
    case 166i64:
    case 167i64:
    case 168i64:
    case 169i64:
    case 170i64:
    case 171i64:
    case 172i64:
    case 173i64:
    case 174i64:
    case 175i64:
    case 176i64:
    case 177i64:
    case 178i64:
    case 179i64:
    case 180i64:
    case 181i64:
    case 182i64:
    case 183i64:
    case 184i64:
    case 185i64:
    case 186i64:
    case 187i64:
    case 188i64:
    case 189i64:
    case 190i64:
    case 191i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 161-191
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+40h]
        vmovups ymmword ptr [r13+40h], ymm0
        vmovups ymm0, ymmword ptr [r12+60h]
        vmovups ymmword ptr [r13+60h], ymm0
        vmovups ymm0, ymmword ptr [r12+80h]
        vmovups ymmword ptr [r13+80h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 192i64:
      goto LABEL_47;
    case 193i64:
    case 194i64:
    case 195i64:
    case 196i64:
    case 197i64:
    case 198i64:
    case 199i64:
    case 200i64:
    case 201i64:
    case 202i64:
    case 203i64:
    case 204i64:
    case 205i64:
    case 206i64:
    case 207i64:
    case 208i64:
    case 209i64:
    case 210i64:
    case 211i64:
    case 212i64:
    case 213i64:
    case 214i64:
    case 215i64:
    case 216i64:
    case 217i64:
    case 218i64:
    case 219i64:
    case 220i64:
    case 221i64:
    case 222i64:
    case 223i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 193-223
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+40h]
        vmovups ymmword ptr [r13+40h], ymm0
        vmovups ymm0, ymmword ptr [r12+60h]
        vmovups ymmword ptr [r13+60h], ymm0
        vmovups ymm0, ymmword ptr [r12+80h]
        vmovups ymmword ptr [r13+80h], ymm0
        vmovups ymm0, ymmword ptr [r12+0A0h]
        vmovups ymmword ptr [r13+0A0h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 224i64:
      goto LABEL_46;
    case 225i64:
    case 226i64:
    case 227i64:
    case 228i64:
    case 229i64:
    case 230i64:
    case 231i64:
    case 232i64:
    case 233i64:
    case 234i64:
    case 235i64:
    case 236i64:
    case 237i64:
    case 238i64:
    case 239i64:
    case 240i64:
    case 241i64:
    case 242i64:
    case 243i64:
    case 244i64:
    case 245i64:
    case 246i64:
    case 247i64:
    case 248i64:
    case 249i64:
    case 250i64:
    case 251i64:
    case 252i64:
    case 253i64:
    case 254i64:
    case 255i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]; jumptable 0000000183101127 cases 225-255
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm0, ymmword ptr [r12+20h]
        vmovups ymmword ptr [r13+20h], ymm0
        vmovups ymm0, ymmword ptr [r12+40h]
        vmovups ymmword ptr [r13+40h], ymm0
        vmovups ymm0, ymmword ptr [r12+60h]
        vmovups ymmword ptr [r13+60h], ymm0
        vmovups ymm0, ymmword ptr [r12+80h]
        vmovups ymmword ptr [r13+80h], ymm0
        vmovups ymm0, ymmword ptr [r12+0A0h]
        vmovups ymmword ptr [r13+0A0h], ymm0
        vmovups ymm0, ymmword ptr [r12+0C0h]
        vmovups ymmword ptr [r13+0C0h], ymm0
        vmovups ymm0, ymmword ptr [r12+r8-20h]
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    case 256i64:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-100h]; jumptable 0000000183101127 case 256
        vmovups ymmword ptr [r13+r8-100h], ymm0
      }
LABEL_46:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-0E0h]; jumptable 0000000183101127 case 224
        vmovups ymmword ptr [r13+r8-0E0h], ymm0
      }
LABEL_47:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-0C0h]; jumptable 0000000183101127 case 192
        vmovups ymmword ptr [r13+r8-0C0h], ymm0
      }
LABEL_48:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-0A0h]; jumptable 0000000183101127 case 160
        vmovups ymmword ptr [r13+r8-0A0h], ymm0
      }
LABEL_49:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-80h]; jumptable 0000000183101127 case 128
        vmovups ymmword ptr [r13+r8-80h], ymm0
      }
LABEL_50:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-60h]; jumptable 0000000183101127 case 96
        vmovups ymmword ptr [r13+r8-60h], ymm0
      }
LABEL_51:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-40h]; jumptable 0000000183101127 case 64
        vmovups ymmword ptr [r13+r8-40h], ymm0
      }
LABEL_52:
      __asm
      {
        vmovups ymm0, ymmword ptr [r12+r8-20h]; jumptable 0000000183101127 case 32
        vmovups ymmword ptr [r13+r8-20h], ymm0
      }
      goto LABEL_53;
    default:
      if ( ((unsigned __int8)a1 & 0x1F) != 0 )
      {
        v6 = 32i64 - ((unsigned __int8)a1 & 0x1F);
        _R8 -= v6;
        _RDX = &a1[v6];
        _R11 = &_R12[v6];
        switch ( v6 )
        {
          case 0i64:
            break;
          case 1i64:
            *a1 = *_R12;
            break;
          case 2i64:
            *(_WORD *)a1 = *(_WORD *)_R12;
            break;
          case 3i64:
            *(_WORD *)a1 = *(_WORD *)_R12;
            a1[2] = _R12[2];
            break;
          case 4i64:
            *(_DWORD *)a1 = *(_DWORD *)_R12;
            break;
          case 5i64:
          case 6i64:
          case 7i64:
            *(_DWORD *)a1 = *(_DWORD *)_R12;
            *((_DWORD *)_RDX - 1) = *((_DWORD *)_R11 - 1);
            break;
          case 8i64:
            *(_QWORD *)a1 = *(_QWORD *)_R12;
            break;
          case 9i64:
          case 10i64:
          case 11i64:
          case 12i64:
          case 13i64:
          case 14i64:
          case 15i64:
            *(_QWORD *)a1 = *(_QWORD *)_R12;
            *((_QWORD *)_RDX - 1) = *((_QWORD *)_R11 - 1);
            break;
          case 16i64:
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]; jumptable 000000018310115A case 16
              vmovups xmmword ptr [r13+0], xmm0
            }
            break;
          case 17i64:
          case 18i64:
          case 19i64:
          case 20i64:
          case 21i64:
          case 22i64:
          case 23i64:
          case 24i64:
          case 25i64:
          case 26i64:
          case 27i64:
          case 28i64:
          case 29i64:
          case 30i64:
          case 31i64:
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]; jumptable 000000018310115A cases 17-31
              vmovups xmmword ptr [r13+0], xmm0
              vmovups xmm0, xmmword ptr [r11-10h]
              vmovups xmmword ptr [rdx-10h], xmm0
            }
            break;
        }
        _R13 = &a1[v6];
        _R12 += v6;
      }
      if ( _R8 < 256 )
        goto LABEL_21;
      if ( _R8 < qword_183D11798 - ((unsigned __int64)qword_183D11798 >> 2) )
        goto LABEL_7;
      if ( _R8 >= (unsigned __int64)qword_183D11788 )
      {
        do
        {
          _mm_prefetch(_R12 + 512, 1);
          _mm_prefetch(_R12 + 576, 1);
          _mm_prefetch(_R12 + 640, 1);
          _mm_prefetch(_R12 + 704, 1);
          __asm
          {
            vmovdqu ymm1, ymmword ptr [r12]
            vmovdqu ymm2, ymmword ptr [r12+20h]
            vmovdqu ymm3, ymmword ptr [r12+40h]
            vmovdqu ymm4, ymmword ptr [r12+60h]
            vmovntdq ymmword ptr [r13+0], ymm1
            vmovntdq ymmword ptr [r13+20h], ymm2
            vmovntdq ymmword ptr [r13+40h], ymm3
            vmovntdq ymmword ptr [r13+60h], ymm4
          }
          _R8 -= 256i64;
          __asm
          {
            vmovdqu ymm1, ymmword ptr [r12+80h]
            vmovdqu ymm2, ymmword ptr [r12+0A0h]
            vmovdqu ymm3, ymmword ptr [r12+0C0h]
            vmovdqu ymm4, ymmword ptr [r12+0E0h]
            vmovntdq ymmword ptr [r13+80h], ymm1
            vmovntdq ymmword ptr [r13+0A0h], ymm2
            vmovntdq ymmword ptr [r13+0C0h], ymm3
            vmovntdq ymmword ptr [r13+0E0h], ymm4
          }
          _R13 += 256;
          _R12 += 256;
        }
        while ( _R8 >= 768 );
        _mm_sfence();
LABEL_7:
        while ( 2 )
        {
          __asm
          {
            vmovdqu ymm1, ymmword ptr [r12]; jumptable 0000000183101434 default case
            vmovdqu ymm2, ymmword ptr [r12+20h]
            vmovdqu ymm3, ymmword ptr [r12+40h]
            vmovdqu ymm4, ymmword ptr [r12+60h]
            vmovdqa ymmword ptr [r13+0], ymm1
            vmovdqa ymmword ptr [r13+20h], ymm2
            vmovdqa ymmword ptr [r13+40h], ymm3
            vmovdqa ymmword ptr [r13+60h], ymm4
            vmovdqu ymm1, ymmword ptr [r12+80h]
            vmovdqu ymm2, ymmword ptr [r12+0A0h]
            vmovdqu ymm3, ymmword ptr [r12+0C0h]
            vmovdqu ymm4, ymmword ptr [r12+0E0h]
            vmovdqa ymmword ptr [r13+80h], ymm1
            vmovdqa ymmword ptr [r13+0A0h], ymm2
            vmovdqa ymmword ptr [r13+0C0h], ymm3
            vmovdqa ymmword ptr [r13+0E0h], ymm4
          }
          _R13 += 256;
          _R12 += 256;
          _R8 -= 256i64;
LABEL_21:
          v28 = &_R13[_R8];
          _R13 = (char *)((unsigned __int64)&_R13[_R8] & 0xFFFFFFFFFFFFFFE0ui64);
          _R12 = &_R12[_R8 - (v28 - _R13)];
          switch ( _R8 )
          {
            case 0i64:
              break;
            case 1i64:
              goto LABEL_29;
            case 2i64:
              goto LABEL_30;
            case 3i64:
              goto LABEL_31;
            case 4i64:
              goto LABEL_32;
            case 5i64:
            case 6i64:
            case 7i64:
              goto LABEL_33;
            case 8i64:
              goto LABEL_34;
            case 9i64:
            case 10i64:
            case 11i64:
            case 12i64:
            case 13i64:
            case 14i64:
            case 15i64:
              goto LABEL_35;
            case 16i64:
              goto LABEL_36;
            case 17i64:
            case 18i64:
            case 19i64:
            case 20i64:
            case 21i64:
            case 22i64:
            case 23i64:
            case 24i64:
            case 25i64:
            case 26i64:
            case 27i64:
            case 28i64:
            case 29i64:
            case 30i64:
            case 31i64:
              goto LABEL_37;
            case 32i64:
            case 33i64:
            case 34i64:
            case 35i64:
            case 36i64:
            case 37i64:
            case 38i64:
            case 39i64:
            case 40i64:
            case 41i64:
            case 42i64:
            case 43i64:
            case 44i64:
            case 45i64:
            case 46i64:
            case 47i64:
            case 48i64:
            case 49i64:
            case 50i64:
            case 51i64:
            case 52i64:
            case 53i64:
            case 54i64:
            case 55i64:
            case 56i64:
            case 57i64:
            case 58i64:
            case 59i64:
            case 60i64:
            case 61i64:
            case 62i64:
            case 63i64:
              goto LABEL_28;
            case 64i64:
            case 65i64:
            case 66i64:
            case 67i64:
            case 68i64:
            case 69i64:
            case 70i64:
            case 71i64:
            case 72i64:
            case 73i64:
            case 74i64:
            case 75i64:
            case 76i64:
            case 77i64:
            case 78i64:
            case 79i64:
            case 80i64:
            case 81i64:
            case 82i64:
            case 83i64:
            case 84i64:
            case 85i64:
            case 86i64:
            case 87i64:
            case 88i64:
            case 89i64:
            case 90i64:
            case 91i64:
            case 92i64:
            case 93i64:
            case 94i64:
            case 95i64:
              goto LABEL_27;
            case 96i64:
            case 97i64:
            case 98i64:
            case 99i64:
            case 100i64:
            case 101i64:
            case 102i64:
            case 103i64:
            case 104i64:
            case 105i64:
            case 106i64:
            case 107i64:
            case 108i64:
            case 109i64:
            case 110i64:
            case 111i64:
            case 112i64:
            case 113i64:
            case 114i64:
            case 115i64:
            case 116i64:
            case 117i64:
            case 118i64:
            case 119i64:
            case 120i64:
            case 121i64:
            case 122i64:
            case 123i64:
            case 124i64:
            case 125i64:
            case 126i64:
            case 127i64:
              goto LABEL_26;
            case 128i64:
            case 129i64:
            case 130i64:
            case 131i64:
            case 132i64:
            case 133i64:
            case 134i64:
            case 135i64:
            case 136i64:
            case 137i64:
            case 138i64:
            case 139i64:
            case 140i64:
            case 141i64:
            case 142i64:
            case 143i64:
            case 144i64:
            case 145i64:
            case 146i64:
            case 147i64:
            case 148i64:
            case 149i64:
            case 150i64:
            case 151i64:
            case 152i64:
            case 153i64:
            case 154i64:
            case 155i64:
            case 156i64:
            case 157i64:
            case 158i64:
            case 159i64:
              goto LABEL_25;
            case 160i64:
            case 161i64:
            case 162i64:
            case 163i64:
            case 164i64:
            case 165i64:
            case 166i64:
            case 167i64:
            case 168i64:
            case 169i64:
            case 170i64:
            case 171i64:
            case 172i64:
            case 173i64:
            case 174i64:
            case 175i64:
            case 176i64:
            case 177i64:
            case 178i64:
            case 179i64:
            case 180i64:
            case 181i64:
            case 182i64:
            case 183i64:
            case 184i64:
            case 185i64:
            case 186i64:
            case 187i64:
            case 188i64:
            case 189i64:
            case 190i64:
            case 191i64:
              goto LABEL_24;
            case 192i64:
            case 193i64:
            case 194i64:
            case 195i64:
            case 196i64:
            case 197i64:
            case 198i64:
            case 199i64:
            case 200i64:
            case 201i64:
            case 202i64:
            case 203i64:
            case 204i64:
            case 205i64:
            case 206i64:
            case 207i64:
            case 208i64:
            case 209i64:
            case 210i64:
            case 211i64:
            case 212i64:
            case 213i64:
            case 214i64:
            case 215i64:
            case 216i64:
            case 217i64:
            case 218i64:
            case 219i64:
            case 220i64:
            case 221i64:
            case 222i64:
            case 223i64:
              goto LABEL_23;
            case 224i64:
            case 225i64:
            case 226i64:
            case 227i64:
            case 228i64:
            case 229i64:
            case 230i64:
            case 231i64:
            case 232i64:
            case 233i64:
            case 234i64:
            case 235i64:
            case 236i64:
            case 237i64:
            case 238i64:
            case 239i64:
            case 240i64:
            case 241i64:
            case 242i64:
            case 243i64:
            case 244i64:
            case 245i64:
            case 246i64:
            case 247i64:
            case 248i64:
            case 249i64:
            case 250i64:
            case 251i64:
            case 252i64:
            case 253i64:
            case 254i64:
            case 255i64:
LABEL_22:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-0E0h]; jumptable 0000000183101434 cases 480-511
                vmovaps ymmword ptr [r13-0E0h], ymm0
              }
LABEL_23:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-0C0h]; jumptable 0000000183101434 cases 448-479
                vmovaps ymmword ptr [r13-0C0h], ymm0
              }
LABEL_24:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-0A0h]; jumptable 0000000183101434 cases 416-447
                vmovaps ymmword ptr [r13-0A0h], ymm0
              }
LABEL_25:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-80h]; jumptable 0000000183101434 cases 384-415
                vmovaps ymmword ptr [r13-80h], ymm0
              }
LABEL_26:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-60h]; jumptable 0000000183101434 cases 352-383
                vmovaps ymmword ptr [r13-60h], ymm0
              }
LABEL_27:
              __asm
              {
                vmovups ymm0, ymmword ptr [r12-40h]; jumptable 0000000183101434 cases 320-351
                vmovaps ymmword ptr [r13-40h], ymm0
              }
LABEL_28:
              while ( 2 )
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [r12-20h]; jumptable 0000000183101434 cases 288-319
                  vmovaps ymmword ptr [r13-20h], ymm0
                }
                _R8 = v28 - _R13;
                switch ( v28 - _R13 )
                {
                  case 0i64:
                    goto LABEL_53;
                  case 1i64:
                    goto LABEL_29;
                  case 2i64:
                    goto LABEL_30;
                  case 3i64:
                    goto LABEL_31;
                  case 4i64:
                    goto LABEL_32;
                  case 5i64:
                  case 6i64:
                  case 7i64:
                    goto LABEL_33;
                  case 8i64:
                    goto LABEL_34;
                  case 9i64:
                  case 10i64:
                  case 11i64:
                  case 12i64:
                  case 13i64:
                  case 14i64:
                  case 15i64:
                    goto LABEL_35;
                  case 16i64:
                    goto LABEL_36;
                  case 17i64:
                  case 18i64:
                  case 19i64:
                  case 20i64:
                  case 21i64:
                  case 22i64:
                  case 23i64:
                  case 24i64:
                  case 25i64:
                  case 26i64:
                  case 27i64:
                  case 28i64:
                  case 29i64:
                  case 30i64:
                  case 31i64:
                    goto LABEL_37;
                  case 32i64:
                  case 33i64:
                  case 34i64:
                  case 35i64:
                  case 36i64:
                  case 37i64:
                  case 38i64:
                  case 39i64:
                  case 40i64:
                  case 41i64:
                  case 42i64:
                  case 43i64:
                  case 44i64:
                  case 45i64:
                  case 46i64:
                  case 47i64:
                  case 48i64:
                  case 49i64:
                  case 50i64:
                  case 51i64:
                  case 52i64:
                  case 53i64:
                  case 54i64:
                  case 55i64:
                  case 56i64:
                  case 57i64:
                  case 58i64:
                  case 59i64:
                  case 60i64:
                  case 61i64:
                  case 62i64:
                  case 63i64:
                    continue;
                  case 64i64:
                  case 65i64:
                  case 66i64:
                  case 67i64:
                  case 68i64:
                  case 69i64:
                  case 70i64:
                  case 71i64:
                  case 72i64:
                  case 73i64:
                  case 74i64:
                  case 75i64:
                  case 76i64:
                  case 77i64:
                  case 78i64:
                  case 79i64:
                  case 80i64:
                  case 81i64:
                  case 82i64:
                  case 83i64:
                  case 84i64:
                  case 85i64:
                  case 86i64:
                  case 87i64:
                  case 88i64:
                  case 89i64:
                  case 90i64:
                  case 91i64:
                  case 92i64:
                  case 93i64:
                  case 94i64:
                  case 95i64:
                    goto LABEL_27;
                  case 96i64:
                  case 97i64:
                  case 98i64:
                  case 99i64:
                  case 100i64:
                  case 101i64:
                  case 102i64:
                  case 103i64:
                  case 104i64:
                  case 105i64:
                  case 106i64:
                  case 107i64:
                  case 108i64:
                  case 109i64:
                  case 110i64:
                  case 111i64:
                  case 112i64:
                  case 113i64:
                  case 114i64:
                  case 115i64:
                  case 116i64:
                  case 117i64:
                  case 118i64:
                  case 119i64:
                  case 120i64:
                  case 121i64:
                  case 122i64:
                  case 123i64:
                  case 124i64:
                  case 125i64:
                  case 126i64:
                  case 127i64:
                    goto LABEL_26;
                  case 128i64:
                  case 129i64:
                  case 130i64:
                  case 131i64:
                  case 132i64:
                  case 133i64:
                  case 134i64:
                  case 135i64:
                  case 136i64:
                  case 137i64:
                  case 138i64:
                  case 139i64:
                  case 140i64:
                  case 141i64:
                  case 142i64:
                  case 143i64:
                  case 144i64:
                  case 145i64:
                  case 146i64:
                  case 147i64:
                  case 148i64:
                  case 149i64:
                  case 150i64:
                  case 151i64:
                  case 152i64:
                  case 153i64:
                  case 154i64:
                  case 155i64:
                  case 156i64:
                  case 157i64:
                  case 158i64:
                  case 159i64:
                    goto LABEL_25;
                  case 160i64:
                  case 161i64:
                  case 162i64:
                  case 163i64:
                  case 164i64:
                  case 165i64:
                  case 166i64:
                  case 167i64:
                  case 168i64:
                  case 169i64:
                  case 170i64:
                  case 171i64:
                  case 172i64:
                  case 173i64:
                  case 174i64:
                  case 175i64:
                  case 176i64:
                  case 177i64:
                  case 178i64:
                  case 179i64:
                  case 180i64:
                  case 181i64:
                  case 182i64:
                  case 183i64:
                  case 184i64:
                  case 185i64:
                  case 186i64:
                  case 187i64:
                  case 188i64:
                  case 189i64:
                  case 190i64:
                  case 191i64:
                    goto LABEL_24;
                  case 192i64:
                  case 193i64:
                  case 194i64:
                  case 195i64:
                  case 196i64:
                  case 197i64:
                  case 198i64:
                  case 199i64:
                  case 200i64:
                  case 201i64:
                  case 202i64:
                  case 203i64:
                  case 204i64:
                  case 205i64:
                  case 206i64:
                  case 207i64:
                  case 208i64:
                  case 209i64:
                  case 210i64:
                  case 211i64:
                  case 212i64:
                  case 213i64:
                  case 214i64:
                  case 215i64:
                  case 216i64:
                  case 217i64:
                  case 218i64:
                  case 219i64:
                  case 220i64:
                  case 221i64:
                  case 222i64:
                  case 223i64:
                    goto LABEL_23;
                  case 224i64:
                  case 225i64:
                  case 226i64:
                  case 227i64:
                  case 228i64:
                  case 229i64:
                  case 230i64:
                  case 231i64:
                  case 232i64:
                  case 233i64:
                  case 234i64:
                  case 235i64:
                  case 236i64:
                  case 237i64:
                  case 238i64:
                  case 239i64:
                  case 240i64:
                  case 241i64:
                  case 242i64:
                  case 243i64:
                  case 244i64:
                  case 245i64:
                  case 246i64:
                  case 247i64:
                  case 248i64:
                  case 249i64:
                  case 250i64:
                  case 251i64:
                  case 252i64:
                  case 253i64:
                  case 254i64:
                  case 255i64:
                    goto LABEL_22;
                }
              }
            default:
              continue;
          }
          break;
        }
      }
      else
      {
        qmemcpy(_R13, _R12, _R8);
      }
LABEL_53:
      __asm { vzeroupper }
      return result;
  }
}