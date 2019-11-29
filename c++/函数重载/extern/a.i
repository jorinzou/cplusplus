
a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000400570 <_init>:
  400570:	48 83 ec 08          	sub    $0x8,%rsp
  400574:	48 8b 05 7d 0a 20 00 	mov    0x200a7d(%rip),%rax        # 600ff8 <_DYNAMIC+0x200>
  40057b:	48 85 c0             	test   %rax,%rax
  40057e:	74 05                	je     400585 <_init+0x15>
  400580:	e8 1b 00 00 00       	callq  4005a0 <__gmon_start__@plt>
  400585:	48 83 c4 08          	add    $0x8,%rsp
  400589:	c3                   	retq   

Disassembly of section .plt:

0000000000400590 <__gmon_start__@plt-0x10>:
  400590:	ff 35 72 0a 20 00    	pushq  0x200a72(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400596:	ff 25 74 0a 20 00    	jmpq   *0x200a74(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40059c:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004005a0 <__gmon_start__@plt>:
  4005a0:	ff 25 72 0a 20 00    	jmpq   *0x200a72(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4005a6:	68 00 00 00 00       	pushq  $0x0
  4005ab:	e9 e0 ff ff ff       	jmpq   400590 <_init+0x20>

00000000004005b0 <_ZNSt8ios_base4InitC1Ev@plt>:
  4005b0:	ff 25 6a 0a 20 00    	jmpq   *0x200a6a(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  4005b6:	68 01 00 00 00       	pushq  $0x1
  4005bb:	e9 d0 ff ff ff       	jmpq   400590 <_init+0x20>

00000000004005c0 <__libc_start_main@plt>:
  4005c0:	ff 25 62 0a 20 00    	jmpq   *0x200a62(%rip)        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  4005c6:	68 02 00 00 00       	pushq  $0x2
  4005cb:	e9 c0 ff ff ff       	jmpq   400590 <_init+0x20>

00000000004005d0 <__cxa_atexit@plt>:
  4005d0:	ff 25 5a 0a 20 00    	jmpq   *0x200a5a(%rip)        # 601030 <_GLOBAL_OFFSET_TABLE_+0x30>
  4005d6:	68 03 00 00 00       	pushq  $0x3
  4005db:	e9 b0 ff ff ff       	jmpq   400590 <_init+0x20>

00000000004005e0 <_ZNSt8ios_base4InitD1Ev@plt>:
  4005e0:	ff 25 52 0a 20 00    	jmpq   *0x200a52(%rip)        # 601038 <_GLOBAL_OFFSET_TABLE_+0x38>
  4005e6:	68 04 00 00 00       	pushq  $0x4
  4005eb:	e9 a0 ff ff ff       	jmpq   400590 <_init+0x20>

Disassembly of section .text:

00000000004005f0 <_start>:
  4005f0:	31 ed                	xor    %ebp,%ebp
  4005f2:	49 89 d1             	mov    %rdx,%r9
  4005f5:	5e                   	pop    %rsi
  4005f6:	48 89 e2             	mov    %rsp,%rdx
  4005f9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4005fd:	50                   	push   %rax
  4005fe:	54                   	push   %rsp
  4005ff:	49 c7 c0 e0 07 40 00 	mov    $0x4007e0,%r8
  400606:	48 c7 c1 70 07 40 00 	mov    $0x400770,%rcx
  40060d:	48 c7 c7 f1 06 40 00 	mov    $0x4006f1,%rdi
  400614:	e8 a7 ff ff ff       	callq  4005c0 <__libc_start_main@plt>
  400619:	f4                   	hlt    
  40061a:	66 90                	xchg   %ax,%ax
  40061c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400620 <deregister_tm_clones>:
  400620:	b8 4f 10 60 00       	mov    $0x60104f,%eax
  400625:	55                   	push   %rbp
  400626:	48 2d 48 10 60 00    	sub    $0x601048,%rax
  40062c:	48 83 f8 0e          	cmp    $0xe,%rax
  400630:	48 89 e5             	mov    %rsp,%rbp
  400633:	77 02                	ja     400637 <deregister_tm_clones+0x17>
  400635:	5d                   	pop    %rbp
  400636:	c3                   	retq   
  400637:	b8 00 00 00 00       	mov    $0x0,%eax
  40063c:	48 85 c0             	test   %rax,%rax
  40063f:	74 f4                	je     400635 <deregister_tm_clones+0x15>
  400641:	5d                   	pop    %rbp
  400642:	bf 48 10 60 00       	mov    $0x601048,%edi
  400647:	ff e0                	jmpq   *%rax
  400649:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400650 <register_tm_clones>:
  400650:	b8 48 10 60 00       	mov    $0x601048,%eax
  400655:	55                   	push   %rbp
  400656:	48 2d 48 10 60 00    	sub    $0x601048,%rax
  40065c:	48 c1 f8 03          	sar    $0x3,%rax
  400660:	48 89 e5             	mov    %rsp,%rbp
  400663:	48 89 c2             	mov    %rax,%rdx
  400666:	48 c1 ea 3f          	shr    $0x3f,%rdx
  40066a:	48 01 d0             	add    %rdx,%rax
  40066d:	48 d1 f8             	sar    %rax
  400670:	75 02                	jne    400674 <register_tm_clones+0x24>
  400672:	5d                   	pop    %rbp
  400673:	c3                   	retq   
  400674:	ba 00 00 00 00       	mov    $0x0,%edx
  400679:	48 85 d2             	test   %rdx,%rdx
  40067c:	74 f4                	je     400672 <register_tm_clones+0x22>
  40067e:	5d                   	pop    %rbp
  40067f:	48 89 c6             	mov    %rax,%rsi
  400682:	bf 48 10 60 00       	mov    $0x601048,%edi
  400687:	ff e2                	jmpq   *%rdx
  400689:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400690 <__do_global_dtors_aux>:
  400690:	80 3d ad 09 20 00 00 	cmpb   $0x0,0x2009ad(%rip)        # 601044 <_edata>
  400697:	75 11                	jne    4006aa <__do_global_dtors_aux+0x1a>
  400699:	55                   	push   %rbp
  40069a:	48 89 e5             	mov    %rsp,%rbp
  40069d:	e8 7e ff ff ff       	callq  400620 <deregister_tm_clones>
  4006a2:	5d                   	pop    %rbp
  4006a3:	c6 05 9a 09 20 00 01 	movb   $0x1,0x20099a(%rip)        # 601044 <_edata>
  4006aa:	f3 c3                	repz retq 
  4006ac:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004006b0 <frame_dummy>:
  4006b0:	48 83 3d 38 07 20 00 	cmpq   $0x0,0x200738(%rip)        # 600df0 <__JCR_END__>
  4006b7:	00 
  4006b8:	74 1e                	je     4006d8 <frame_dummy+0x28>
  4006ba:	b8 00 00 00 00       	mov    $0x0,%eax
  4006bf:	48 85 c0             	test   %rax,%rax
  4006c2:	74 14                	je     4006d8 <frame_dummy+0x28>
  4006c4:	55                   	push   %rbp
  4006c5:	bf f0 0d 60 00       	mov    $0x600df0,%edi
  4006ca:	48 89 e5             	mov    %rsp,%rbp
  4006cd:	ff d0                	callq  *%rax
  4006cf:	5d                   	pop    %rbp
  4006d0:	e9 7b ff ff ff       	jmpq   400650 <register_tm_clones>
  4006d5:	0f 1f 00             	nopl   (%rax)
  4006d8:	e9 73 ff ff ff       	jmpq   400650 <register_tm_clones>
  4006dd:	0f 1f 00             	nopl   (%rax)

00000000004006e0 <func>:
  4006e0:	55                   	push   %rbp
  4006e1:	48 89 e5             	mov    %rsp,%rbp
  4006e4:	89 7d fc             	mov    %edi,-0x4(%rbp)
  4006e7:	f2 0f 11 45 f0       	movsd  %xmm0,-0x10(%rbp)
  4006ec:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4006ef:	5d                   	pop    %rbp
  4006f0:	c3                   	retq   

00000000004006f1 <main>:
  4006f1:	55                   	push   %rbp
  4006f2:	48 89 e5             	mov    %rsp,%rbp
  4006f5:	48 83 ec 08          	sub    $0x8,%rsp
  4006f9:	48 b8 3d 0a d7 a3 70 	movabs $0x40123d70a3d70a3d,%rax
  400700:	3d 12 40 
  400703:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400707:	f2 0f 10 45 f8       	movsd  -0x8(%rbp),%xmm0
  40070c:	bf 02 00 00 00       	mov    $0x2,%edi
  400711:	e8 ca ff ff ff       	callq  4006e0 <func>
  400716:	b8 00 00 00 00       	mov    $0x0,%eax
  40071b:	c9                   	leaveq 
  40071c:	c3                   	retq   

000000000040071d <_Z41__static_initialization_and_destruction_0ii>:
  40071d:	55                   	push   %rbp
  40071e:	48 89 e5             	mov    %rsp,%rbp
  400721:	48 83 ec 10          	sub    $0x10,%rsp
  400725:	89 7d fc             	mov    %edi,-0x4(%rbp)
  400728:	89 75 f8             	mov    %esi,-0x8(%rbp)
  40072b:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  40072f:	75 27                	jne    400758 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  400731:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
  400738:	75 1e                	jne    400758 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  40073a:	bf 48 10 60 00       	mov    $0x601048,%edi
  40073f:	e8 6c fe ff ff       	callq  4005b0 <_ZNSt8ios_base4InitC1Ev@plt>
  400744:	ba f8 07 40 00       	mov    $0x4007f8,%edx
  400749:	be 48 10 60 00       	mov    $0x601048,%esi
  40074e:	bf e0 05 40 00       	mov    $0x4005e0,%edi
  400753:	e8 78 fe ff ff       	callq  4005d0 <__cxa_atexit@plt>
  400758:	c9                   	leaveq 
  400759:	c3                   	retq   

000000000040075a <_GLOBAL__sub_I_func>:
  40075a:	55                   	push   %rbp
  40075b:	48 89 e5             	mov    %rsp,%rbp
  40075e:	be ff ff 00 00       	mov    $0xffff,%esi
  400763:	bf 01 00 00 00       	mov    $0x1,%edi
  400768:	e8 b0 ff ff ff       	callq  40071d <_Z41__static_initialization_and_destruction_0ii>
  40076d:	5d                   	pop    %rbp
  40076e:	c3                   	retq   
  40076f:	90                   	nop

0000000000400770 <__libc_csu_init>:
  400770:	41 57                	push   %r15
  400772:	41 89 ff             	mov    %edi,%r15d
  400775:	41 56                	push   %r14
  400777:	49 89 f6             	mov    %rsi,%r14
  40077a:	41 55                	push   %r13
  40077c:	49 89 d5             	mov    %rdx,%r13
  40077f:	41 54                	push   %r12
  400781:	4c 8d 25 50 06 20 00 	lea    0x200650(%rip),%r12        # 600dd8 <__frame_dummy_init_array_entry>
  400788:	55                   	push   %rbp
  400789:	48 8d 2d 58 06 20 00 	lea    0x200658(%rip),%rbp        # 600de8 <__init_array_end>
  400790:	53                   	push   %rbx
  400791:	4c 29 e5             	sub    %r12,%rbp
  400794:	31 db                	xor    %ebx,%ebx
  400796:	48 c1 fd 03          	sar    $0x3,%rbp
  40079a:	48 83 ec 08          	sub    $0x8,%rsp
  40079e:	e8 cd fd ff ff       	callq  400570 <_init>
  4007a3:	48 85 ed             	test   %rbp,%rbp
  4007a6:	74 1e                	je     4007c6 <__libc_csu_init+0x56>
  4007a8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4007af:	00 
  4007b0:	4c 89 ea             	mov    %r13,%rdx
  4007b3:	4c 89 f6             	mov    %r14,%rsi
  4007b6:	44 89 ff             	mov    %r15d,%edi
  4007b9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4007bd:	48 83 c3 01          	add    $0x1,%rbx
  4007c1:	48 39 eb             	cmp    %rbp,%rbx
  4007c4:	75 ea                	jne    4007b0 <__libc_csu_init+0x40>
  4007c6:	48 83 c4 08          	add    $0x8,%rsp
  4007ca:	5b                   	pop    %rbx
  4007cb:	5d                   	pop    %rbp
  4007cc:	41 5c                	pop    %r12
  4007ce:	41 5d                	pop    %r13
  4007d0:	41 5e                	pop    %r14
  4007d2:	41 5f                	pop    %r15
  4007d4:	c3                   	retq   
  4007d5:	66 66 2e 0f 1f 84 00 	data32 nopw %cs:0x0(%rax,%rax,1)
  4007dc:	00 00 00 00 

00000000004007e0 <__libc_csu_fini>:
  4007e0:	f3 c3                	repz retq 
  4007e2:	66 90                	xchg   %ax,%ax

Disassembly of section .fini:

00000000004007e4 <_fini>:
  4007e4:	48 83 ec 08          	sub    $0x8,%rsp
  4007e8:	48 83 c4 08          	add    $0x8,%rsp
  4007ec:	c3                   	retq   
