
a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000400748 <_init>:
  400748:	48 83 ec 08          	sub    $0x8,%rsp
  40074c:	48 8b 05 a5 08 20 00 	mov    0x2008a5(%rip),%rax        # 600ff8 <_DYNAMIC+0x200>
  400753:	48 85 c0             	test   %rax,%rax
  400756:	74 05                	je     40075d <_init+0x15>
  400758:	e8 43 00 00 00       	callq  4007a0 <__gmon_start__@plt>
  40075d:	48 83 c4 08          	add    $0x8,%rsp
  400761:	c3                   	retq   

Disassembly of section .plt:

0000000000400770 <_ZNSolsEd@plt-0x10>:
  400770:	ff 35 92 08 20 00    	pushq  0x200892(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400776:	ff 25 94 08 20 00    	jmpq   *0x200894(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40077c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400780 <_ZNSolsEd@plt>:
  400780:	ff 25 92 08 20 00    	jmpq   *0x200892(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400786:	68 00 00 00 00       	pushq  $0x0
  40078b:	e9 e0 ff ff ff       	jmpq   400770 <_init+0x28>

0000000000400790 <_ZNSolsEi@plt>:
  400790:	ff 25 8a 08 20 00    	jmpq   *0x20088a(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400796:	68 01 00 00 00       	pushq  $0x1
  40079b:	e9 d0 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007a0 <__gmon_start__@plt>:
  4007a0:	ff 25 82 08 20 00    	jmpq   *0x200882(%rip)        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  4007a6:	68 02 00 00 00       	pushq  $0x2
  4007ab:	e9 c0 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007b0 <_ZNSt8ios_base4InitC1Ev@plt>:
  4007b0:	ff 25 7a 08 20 00    	jmpq   *0x20087a(%rip)        # 601030 <_GLOBAL_OFFSET_TABLE_+0x30>
  4007b6:	68 03 00 00 00       	pushq  $0x3
  4007bb:	e9 b0 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007c0 <__libc_start_main@plt>:
  4007c0:	ff 25 72 08 20 00    	jmpq   *0x200872(%rip)        # 601038 <_GLOBAL_OFFSET_TABLE_+0x38>
  4007c6:	68 04 00 00 00       	pushq  $0x4
  4007cb:	e9 a0 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007d0 <__cxa_atexit@plt>:
  4007d0:	ff 25 6a 08 20 00    	jmpq   *0x20086a(%rip)        # 601040 <_GLOBAL_OFFSET_TABLE_+0x40>
  4007d6:	68 05 00 00 00       	pushq  $0x5
  4007db:	e9 90 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007e0 <_ZNSt8ios_base4InitD1Ev@plt>:
  4007e0:	ff 25 62 08 20 00    	jmpq   *0x200862(%rip)        # 601048 <_GLOBAL_OFFSET_TABLE_+0x48>
  4007e6:	68 06 00 00 00       	pushq  $0x6
  4007eb:	e9 80 ff ff ff       	jmpq   400770 <_init+0x28>

00000000004007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
  4007f0:	ff 25 5a 08 20 00    	jmpq   *0x20085a(%rip)        # 601050 <_GLOBAL_OFFSET_TABLE_+0x50>
  4007f6:	68 07 00 00 00       	pushq  $0x7
  4007fb:	e9 70 ff ff ff       	jmpq   400770 <_init+0x28>

0000000000400800 <_ZNSolsEPFRSoS_E@plt>:
  400800:	ff 25 52 08 20 00    	jmpq   *0x200852(%rip)        # 601058 <_GLOBAL_OFFSET_TABLE_+0x58>
  400806:	68 08 00 00 00       	pushq  $0x8
  40080b:	e9 60 ff ff ff       	jmpq   400770 <_init+0x28>

0000000000400810 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>:
  400810:	ff 25 4a 08 20 00    	jmpq   *0x20084a(%rip)        # 601060 <_GLOBAL_OFFSET_TABLE_+0x60>
  400816:	68 09 00 00 00       	pushq  $0x9
  40081b:	e9 50 ff ff ff       	jmpq   400770 <_init+0x28>

Disassembly of section .text:

0000000000400820 <_start>:
  400820:	31 ed                	xor    %ebp,%ebp
  400822:	49 89 d1             	mov    %rdx,%r9
  400825:	5e                   	pop    %rsi
  400826:	48 89 e2             	mov    %rsp,%rdx
  400829:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40082d:	50                   	push   %rax
  40082e:	54                   	push   %rsp
  40082f:	49 c7 c0 00 0b 40 00 	mov    $0x400b00,%r8
  400836:	48 c7 c1 90 0a 40 00 	mov    $0x400a90,%rcx
  40083d:	48 c7 c7 f5 09 40 00 	mov    $0x4009f5,%rdi
  400844:	e8 77 ff ff ff       	callq  4007c0 <__libc_start_main@plt>
  400849:	f4                   	hlt    
  40084a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400850 <deregister_tm_clones>:
  400850:	b8 77 10 60 00       	mov    $0x601077,%eax
  400855:	55                   	push   %rbp
  400856:	48 2d 70 10 60 00    	sub    $0x601070,%rax
  40085c:	48 83 f8 0e          	cmp    $0xe,%rax
  400860:	48 89 e5             	mov    %rsp,%rbp
  400863:	77 02                	ja     400867 <deregister_tm_clones+0x17>
  400865:	5d                   	pop    %rbp
  400866:	c3                   	retq   
  400867:	b8 00 00 00 00       	mov    $0x0,%eax
  40086c:	48 85 c0             	test   %rax,%rax
  40086f:	74 f4                	je     400865 <deregister_tm_clones+0x15>
  400871:	5d                   	pop    %rbp
  400872:	bf 70 10 60 00       	mov    $0x601070,%edi
  400877:	ff e0                	jmpq   *%rax
  400879:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400880 <register_tm_clones>:
  400880:	b8 70 10 60 00       	mov    $0x601070,%eax
  400885:	55                   	push   %rbp
  400886:	48 2d 70 10 60 00    	sub    $0x601070,%rax
  40088c:	48 c1 f8 03          	sar    $0x3,%rax
  400890:	48 89 e5             	mov    %rsp,%rbp
  400893:	48 89 c2             	mov    %rax,%rdx
  400896:	48 c1 ea 3f          	shr    $0x3f,%rdx
  40089a:	48 01 d0             	add    %rdx,%rax
  40089d:	48 d1 f8             	sar    %rax
  4008a0:	75 02                	jne    4008a4 <register_tm_clones+0x24>
  4008a2:	5d                   	pop    %rbp
  4008a3:	c3                   	retq   
  4008a4:	ba 00 00 00 00       	mov    $0x0,%edx
  4008a9:	48 85 d2             	test   %rdx,%rdx
  4008ac:	74 f4                	je     4008a2 <register_tm_clones+0x22>
  4008ae:	5d                   	pop    %rbp
  4008af:	48 89 c6             	mov    %rax,%rsi
  4008b2:	bf 70 10 60 00       	mov    $0x601070,%edi
  4008b7:	ff e2                	jmpq   *%rdx
  4008b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000004008c0 <__do_global_dtors_aux>:
  4008c0:	80 3d c9 08 20 00 00 	cmpb   $0x0,0x2008c9(%rip)        # 601190 <completed.6344>
  4008c7:	75 11                	jne    4008da <__do_global_dtors_aux+0x1a>
  4008c9:	55                   	push   %rbp
  4008ca:	48 89 e5             	mov    %rsp,%rbp
  4008cd:	e8 7e ff ff ff       	callq  400850 <deregister_tm_clones>
  4008d2:	5d                   	pop    %rbp
  4008d3:	c6 05 b6 08 20 00 01 	movb   $0x1,0x2008b6(%rip)        # 601190 <completed.6344>
  4008da:	f3 c3                	repz retq 
  4008dc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004008e0 <frame_dummy>:
  4008e0:	48 83 3d 08 05 20 00 	cmpq   $0x0,0x200508(%rip)        # 600df0 <__JCR_END__>
  4008e7:	00 
  4008e8:	74 1e                	je     400908 <frame_dummy+0x28>
  4008ea:	b8 00 00 00 00       	mov    $0x0,%eax
  4008ef:	48 85 c0             	test   %rax,%rax
  4008f2:	74 14                	je     400908 <frame_dummy+0x28>
  4008f4:	55                   	push   %rbp
  4008f5:	bf f0 0d 60 00       	mov    $0x600df0,%edi
  4008fa:	48 89 e5             	mov    %rsp,%rbp
  4008fd:	ff d0                	callq  *%rax
  4008ff:	5d                   	pop    %rbp
  400900:	e9 7b ff ff ff       	jmpq   400880 <register_tm_clones>
  400905:	0f 1f 00             	nopl   (%rax)
  400908:	e9 73 ff ff ff       	jmpq   400880 <register_tm_clones>

000000000040090d <_Z4funcdi>:
  40090d:	55                   	push   %rbp
  40090e:	48 89 e5             	mov    %rsp,%rbp
  400911:	48 83 ec 20          	sub    $0x20,%rsp
  400915:	f2 0f 11 45 f8       	movsd  %xmm0,-0x8(%rbp)
  40091a:	89 7d f4             	mov    %edi,-0xc(%rbp)
  40091d:	be 20 0b 40 00       	mov    $0x400b20,%esi
  400922:	bf 80 10 60 00       	mov    $0x601080,%edi
  400927:	e8 c4 fe ff ff       	callq  4007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  40092c:	48 89 c2             	mov    %rax,%rdx
  40092f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  400933:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  400937:	f2 0f 10 45 e8       	movsd  -0x18(%rbp),%xmm0
  40093c:	48 89 d7             	mov    %rdx,%rdi
  40093f:	e8 3c fe ff ff       	callq  400780 <_ZNSolsEd@plt>
  400944:	be 10 08 40 00       	mov    $0x400810,%esi
  400949:	48 89 c7             	mov    %rax,%rdi
  40094c:	e8 af fe ff ff       	callq  400800 <_ZNSolsEPFRSoS_E@plt>
  400951:	be 23 0b 40 00       	mov    $0x400b23,%esi
  400956:	bf 80 10 60 00       	mov    $0x601080,%edi
  40095b:	e8 90 fe ff ff       	callq  4007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400960:	8b 55 f4             	mov    -0xc(%rbp),%edx
  400963:	89 d6                	mov    %edx,%esi
  400965:	48 89 c7             	mov    %rax,%rdi
  400968:	e8 23 fe ff ff       	callq  400790 <_ZNSolsEi@plt>
  40096d:	be 10 08 40 00       	mov    $0x400810,%esi
  400972:	48 89 c7             	mov    %rax,%rdi
  400975:	e8 86 fe ff ff       	callq  400800 <_ZNSolsEPFRSoS_E@plt>
  40097a:	b8 00 00 00 00       	mov    $0x0,%eax
  40097f:	c9                   	leaveq 
  400980:	c3                   	retq   

0000000000400981 <_Z4funcid>:
  400981:	55                   	push   %rbp
  400982:	48 89 e5             	mov    %rsp,%rbp
  400985:	48 83 ec 20          	sub    $0x20,%rsp
  400989:	89 7d fc             	mov    %edi,-0x4(%rbp)
  40098c:	f2 0f 11 45 f0       	movsd  %xmm0,-0x10(%rbp)
  400991:	be 23 0b 40 00       	mov    $0x400b23,%esi
  400996:	bf 80 10 60 00       	mov    $0x601080,%edi
  40099b:	e8 50 fe ff ff       	callq  4007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4009a0:	8b 55 fc             	mov    -0x4(%rbp),%edx
  4009a3:	89 d6                	mov    %edx,%esi
  4009a5:	48 89 c7             	mov    %rax,%rdi
  4009a8:	e8 e3 fd ff ff       	callq  400790 <_ZNSolsEi@plt>
  4009ad:	be 10 08 40 00       	mov    $0x400810,%esi
  4009b2:	48 89 c7             	mov    %rax,%rdi
  4009b5:	e8 46 fe ff ff       	callq  400800 <_ZNSolsEPFRSoS_E@plt>
  4009ba:	be 20 0b 40 00       	mov    $0x400b20,%esi
  4009bf:	bf 80 10 60 00       	mov    $0x601080,%edi
  4009c4:	e8 27 fe ff ff       	callq  4007f0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4009c9:	48 89 c2             	mov    %rax,%rdx
  4009cc:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4009d0:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  4009d4:	f2 0f 10 45 e8       	movsd  -0x18(%rbp),%xmm0
  4009d9:	48 89 d7             	mov    %rdx,%rdi
  4009dc:	e8 9f fd ff ff       	callq  400780 <_ZNSolsEd@plt>
  4009e1:	be 10 08 40 00       	mov    $0x400810,%esi
  4009e6:	48 89 c7             	mov    %rax,%rdi
  4009e9:	e8 12 fe ff ff       	callq  400800 <_ZNSolsEPFRSoS_E@plt>
  4009ee:	b8 00 00 00 00       	mov    $0x0,%eax
  4009f3:	c9                   	leaveq 
  4009f4:	c3                   	retq   

00000000004009f5 <main>:
  4009f5:	55                   	push   %rbp
  4009f6:	48 89 e5             	mov    %rsp,%rbp
  4009f9:	48 83 ec 10          	sub    $0x10,%rsp
  4009fd:	48 b8 2b 87 16 d9 ce 	movabs $0x3ff1f7ced916872b,%rax
  400a04:	f7 f1 3f 
  400a07:	bf 17 00 00 00       	mov    $0x17,%edi
  400a0c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400a10:	f2 0f 10 45 f8       	movsd  -0x8(%rbp),%xmm0
  400a15:	e8 f3 fe ff ff       	callq  40090d <_Z4funcdi>
  400a1a:	48 b8 2b 87 16 d9 ce 	movabs $0x3ff1f7ced916872b,%rax
  400a21:	f7 f1 3f 
  400a24:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400a28:	f2 0f 10 45 f8       	movsd  -0x8(%rbp),%xmm0
  400a2d:	bf 2d 00 00 00       	mov    $0x2d,%edi
  400a32:	e8 4a ff ff ff       	callq  400981 <_Z4funcid>
  400a37:	b8 00 00 00 00       	mov    $0x0,%eax
  400a3c:	c9                   	leaveq 
  400a3d:	c3                   	retq   

0000000000400a3e <_Z41__static_initialization_and_destruction_0ii>:
  400a3e:	55                   	push   %rbp
  400a3f:	48 89 e5             	mov    %rsp,%rbp
  400a42:	48 83 ec 10          	sub    $0x10,%rsp
  400a46:	89 7d fc             	mov    %edi,-0x4(%rbp)
  400a49:	89 75 f8             	mov    %esi,-0x8(%rbp)
  400a4c:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  400a50:	75 27                	jne    400a79 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  400a52:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
  400a59:	75 1e                	jne    400a79 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  400a5b:	bf 91 11 60 00       	mov    $0x601191,%edi
  400a60:	e8 4b fd ff ff       	callq  4007b0 <_ZNSt8ios_base4InitC1Ev@plt>
  400a65:	ba 18 0b 40 00       	mov    $0x400b18,%edx
  400a6a:	be 91 11 60 00       	mov    $0x601191,%esi
  400a6f:	bf e0 07 40 00       	mov    $0x4007e0,%edi
  400a74:	e8 57 fd ff ff       	callq  4007d0 <__cxa_atexit@plt>
  400a79:	c9                   	leaveq 
  400a7a:	c3                   	retq   

0000000000400a7b <_GLOBAL__sub_I__Z4funcdi>:
  400a7b:	55                   	push   %rbp
  400a7c:	48 89 e5             	mov    %rsp,%rbp
  400a7f:	be ff ff 00 00       	mov    $0xffff,%esi
  400a84:	bf 01 00 00 00       	mov    $0x1,%edi
  400a89:	e8 b0 ff ff ff       	callq  400a3e <_Z41__static_initialization_and_destruction_0ii>
  400a8e:	5d                   	pop    %rbp
  400a8f:	c3                   	retq   

0000000000400a90 <__libc_csu_init>:
  400a90:	41 57                	push   %r15
  400a92:	41 89 ff             	mov    %edi,%r15d
  400a95:	41 56                	push   %r14
  400a97:	49 89 f6             	mov    %rsi,%r14
  400a9a:	41 55                	push   %r13
  400a9c:	49 89 d5             	mov    %rdx,%r13
  400a9f:	41 54                	push   %r12
  400aa1:	4c 8d 25 30 03 20 00 	lea    0x200330(%rip),%r12        # 600dd8 <__frame_dummy_init_array_entry>
  400aa8:	55                   	push   %rbp
  400aa9:	48 8d 2d 38 03 20 00 	lea    0x200338(%rip),%rbp        # 600de8 <__init_array_end>
  400ab0:	53                   	push   %rbx
  400ab1:	4c 29 e5             	sub    %r12,%rbp
  400ab4:	31 db                	xor    %ebx,%ebx
  400ab6:	48 c1 fd 03          	sar    $0x3,%rbp
  400aba:	48 83 ec 08          	sub    $0x8,%rsp
  400abe:	e8 85 fc ff ff       	callq  400748 <_init>
  400ac3:	48 85 ed             	test   %rbp,%rbp
  400ac6:	74 1e                	je     400ae6 <__libc_csu_init+0x56>
  400ac8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  400acf:	00 
  400ad0:	4c 89 ea             	mov    %r13,%rdx
  400ad3:	4c 89 f6             	mov    %r14,%rsi
  400ad6:	44 89 ff             	mov    %r15d,%edi
  400ad9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  400add:	48 83 c3 01          	add    $0x1,%rbx
  400ae1:	48 39 eb             	cmp    %rbp,%rbx
  400ae4:	75 ea                	jne    400ad0 <__libc_csu_init+0x40>
  400ae6:	48 83 c4 08          	add    $0x8,%rsp
  400aea:	5b                   	pop    %rbx
  400aeb:	5d                   	pop    %rbp
  400aec:	41 5c                	pop    %r12
  400aee:	41 5d                	pop    %r13
  400af0:	41 5e                	pop    %r14
  400af2:	41 5f                	pop    %r15
  400af4:	c3                   	retq   
  400af5:	90                   	nop
  400af6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400afd:	00 00 00 

0000000000400b00 <__libc_csu_fini>:
  400b00:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400b04 <_fini>:
  400b04:	48 83 ec 08          	sub    $0x8,%rsp
  400b08:	48 83 c4 08          	add    $0x8,%rsp
  400b0c:	c3                   	retq   
