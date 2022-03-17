
CCallHProc:
    xxxx
    jmp     loc_7FF8C45E8242
    
    
    
loc_7FF8C45E8242:
    xxxxx
    jnz     short loc_7FF8C45E82E3(跳转)
    
loc_7FF8C45E82E3:
    jz      short loc_7FF8C45E8314(跳转)
    
    
loc_7FF8C45E8314:
    jz      short loc_7FF8C45E8350(跳转)
    
loc_7FF8C45E8350:
    jbe     loc_7FF8C45E8413(跳转)
    
loc_7FF8C45E8413:
    call    HSchedEnterNonExclProc
    jnz     loc_7FF8C45E8B1C(不跳转)
    jz      loc_7FF8C45E853E(不跳转)
    jle     loc_7FF8C45E853E(跳转)
    
loc_7FF8C45E853E:
    jnz     short loc_7FF8C45E85DD(不跳转)
    jz      short loc_7FF8C45E85A0(跳转)
    
loc_7FF8C45E85A0(重点):
    jz      loc_7FF8C45E87EA(不跳转)
    
    loc_7FF8C45E85AE:
    mov     rax, [r13+20h]
    mov     rcx, r13
    mov     rbx, cs:qword_7FF8C7BF5810
    mov     dword ptr [rax+0B28h], 0
    mov     rdx, [r13+20h]
    mov     dword ptr [rdx+0B24h], 1
    call    qword ptr [r12+rbx]         //r12: 0x8C60 + rbx: 1C2385432D0   = 1C23854BF30(算法的实际地址?)
    jmp     loc_7FF8C45E87F8
    
    
loc_7FF8C6386EC4(0x1C23854BF30???) halcon_IPBFastGrad+A0FB6↓j: (匹配算法关键点)


lea     r9, aSourceHlibMatc
call    near ptr halcon_HXAllocTmp
call    near ptr halcon_HPGetComp
call    near ptr halcon_HPGetImage
call    near ptr halcon_HXAllocTmp
call    near ptr halcon_HXAllocTmp
call    near ptr halcon_HCheckInpObjNum
call    near ptr halcon_HPGetObj
call    near ptr halcon_HPGetFDRL
call    near ptr halcon_HPNumOfChannels
call    near ptr halcon_HPGetComp
call    near ptr halcon_HPGetImage
call    near ptr halcon_HCheckInpObjNum
call    near ptr halcon_HXFreeTmp

call    near ptr halcon_HXAllocTmp
call    near ptr halcon_HXAllocTmp
....(多次)

loc_7FF8C63879AB(出参?):   
call    near ptr unk_7FF8C63B0840  
call    near ptr halcon_HXFreeTmp
call    near ptr halcon_HXFreeTmp
call    near ptr halcon_HXAllocOutputHandle
call    near ptr unk_7FF8C6399180
call    near ptr halcon_HHomMat2DIdentity
call    near ptr halcon_HHomMat2DScale
call    near ptr halcon_HHomMat2DRotate
call    near ptr halcon_HHomMat2DTranslate

loc_7FF8C6388529(析构?):
call    near ptr halcon_HXAlloc
call    near ptr halcon_HXLDAffineTransCont(循环)
call    near ptr halcon_HPPutElem

call    near ptr halcon_HXFreeLocal(多次)

然后是退出....
call    near ptr halcon_HSchedExitNonExclProc












halcon_HSchedEnterNonExclProc:
