/* -*- buffer-read-only: t -*-
 *
 *    keywords.h
 *
 *    Copyright (C) 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002, 2005,
 *    2006, 2007 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/keywords.pl from its data.
 * Any changes made here will be lost!
 */

#define KEY_NULL		0
#define KEY___FILE__		1
#define KEY___LINE__		2
#define KEY___PACKAGE__		3
#define KEY___DATA__		4
#define KEY___END__		5
#define KEY___SUB__		6
#define KEY_AUTOLOAD		7
#define KEY_BEGIN		8
#define KEY_UNITCHECK		9
#define KEY_DESTROY		10
#define KEY_END			11
#define KEY_INIT		12
#define KEY_CHECK		13
#define KEY_abs			14
#define KEY_accept		15
#define KEY_alarm		16
#define KEY_and			17
#define KEY_atan2		18
#define KEY_bind		19
#define KEY_binmode		20
#define KEY_bless		21
#define KEY_break		22
#define KEY_caller		23
#define KEY_catch		24
#define KEY_chdir		25
#define KEY_chmod		26
#define KEY_chomp		27
#define KEY_chop		28
#define KEY_chown		29
#define KEY_chr			30
#define KEY_chroot		31
#define KEY_close		32
#define KEY_closedir		33
#define KEY_cmp			34
#define KEY_connect		35
#define KEY_continue		36
#define KEY_cos			37
#define KEY_crypt		38
#define KEY_dbmclose		39
#define KEY_dbmopen		40
#define KEY_default		41
#define KEY_defer		42
#define KEY_defined		43
#define KEY_delete		44
#define KEY_die			45
#define KEY_do			46
#define KEY_dump		47
#define KEY_each		48
#define KEY_else		49
#define KEY_elsif		50
#define KEY_endgrent		51
#define KEY_endhostent		52
#define KEY_endnetent		53
#define KEY_endprotoent		54
#define KEY_endpwent		55
#define KEY_endservent		56
#define KEY_eof			57
#define KEY_eq			58
#define KEY_eval		59
#define KEY_evalbytes		60
#define KEY_exec		61
#define KEY_exists		62
#define KEY_exit		63
#define KEY_exp			64
#define KEY_fc			65
#define KEY_fcntl		66
#define KEY_fileno		67
#define KEY_flock		68
#define KEY_for			69
#define KEY_foreach		70
#define KEY_fork		71
#define KEY_format		72
#define KEY_formline		73
#define KEY_ge			74
#define KEY_getc		75
#define KEY_getgrent		76
#define KEY_getgrgid		77
#define KEY_getgrnam		78
#define KEY_gethostbyaddr	79
#define KEY_gethostbyname	80
#define KEY_gethostent		81
#define KEY_getlogin		82
#define KEY_getnetbyaddr	83
#define KEY_getnetbyname	84
#define KEY_getnetent		85
#define KEY_getpeername		86
#define KEY_getpgrp		87
#define KEY_getppid		88
#define KEY_getpriority		89
#define KEY_getprotobyname	90
#define KEY_getprotobynumber	91
#define KEY_getprotoent		92
#define KEY_getpwent		93
#define KEY_getpwnam		94
#define KEY_getpwuid		95
#define KEY_getservbyname	96
#define KEY_getservbyport	97
#define KEY_getservent		98
#define KEY_getsockname		99
#define KEY_getsockopt		100
#define KEY_given		101
#define KEY_glob		102
#define KEY_gmtime		103
#define KEY_goto		104
#define KEY_grep		105
#define KEY_gt			106
#define KEY_hex			107
#define KEY_if			108
#define KEY_index		109
#define KEY_int			110
#define KEY_ioctl		111
#define KEY_isa			112
#define KEY_join		113
#define KEY_keys		114
#define KEY_kill		115
#define KEY_last		116
#define KEY_lc			117
#define KEY_lcfirst		118
#define KEY_le			119
#define KEY_length		120
#define KEY_link		121
#define KEY_listen		122
#define KEY_local		123
#define KEY_localtime		124
#define KEY_lock		125
#define KEY_log			126
#define KEY_lstat		127
#define KEY_lt			128
#define KEY_m			129
#define KEY_map			130
#define KEY_mkdir		131
#define KEY_msgctl		132
#define KEY_msgget		133
#define KEY_msgrcv		134
#define KEY_msgsnd		135
#define KEY_my			136
#define KEY_ne			137
#define KEY_next		138
#define KEY_no			139
#define KEY_not			140
#define KEY_oct			141
#define KEY_open		142
#define KEY_opendir		143
#define KEY_or			144
#define KEY_ord			145
#define KEY_our			146
#define KEY_pack		147
#define KEY_package		148
#define KEY_pipe		149
#define KEY_pop			150
#define KEY_pos			151
#define KEY_print		152
#define KEY_printf		153
#define KEY_prototype		154
#define KEY_push		155
#define KEY_q			156
#define KEY_qq			157
#define KEY_qr			158
#define KEY_quotemeta		159
#define KEY_qw			160
#define KEY_qx			161
#define KEY_rand		162
#define KEY_read		163
#define KEY_readdir		164
#define KEY_readline		165
#define KEY_readlink		166
#define KEY_readpipe		167
#define KEY_recv		168
#define KEY_redo		169
#define KEY_ref			170
#define KEY_rename		171
#define KEY_require		172
#define KEY_reset		173
#define KEY_return		174
#define KEY_reverse		175
#define KEY_rewinddir		176
#define KEY_rindex		177
#define KEY_rmdir		178
#define KEY_s			179
#define KEY_say			180
#define KEY_scalar		181
#define KEY_seek		182
#define KEY_seekdir		183
#define KEY_select		184
#define KEY_semctl		185
#define KEY_semget		186
#define KEY_semop		187
#define KEY_send		188
#define KEY_setgrent		189
#define KEY_sethostent		190
#define KEY_setnetent		191
#define KEY_setpgrp		192
#define KEY_setpriority		193
#define KEY_setprotoent		194
#define KEY_setpwent		195
#define KEY_setservent		196
#define KEY_setsockopt		197
#define KEY_shift		198
#define KEY_shmctl		199
#define KEY_shmget		200
#define KEY_shmread		201
#define KEY_shmwrite		202
#define KEY_shutdown		203
#define KEY_sin			204
#define KEY_sleep		205
#define KEY_socket		206
#define KEY_socketpair		207
#define KEY_sort		208
#define KEY_splice		209
#define KEY_split		210
#define KEY_sprintf		211
#define KEY_sqrt		212
#define KEY_srand		213
#define KEY_stat		214
#define KEY_state		215
#define KEY_study		216
#define KEY_sub			217
#define KEY_substr		218
#define KEY_symlink		219
#define KEY_syscall		220
#define KEY_sysopen		221
#define KEY_sysread		222
#define KEY_sysseek		223
#define KEY_system		224
#define KEY_syswrite		225
#define KEY_tell		226
#define KEY_telldir		227
#define KEY_tie			228
#define KEY_tied		229
#define KEY_time		230
#define KEY_times		231
#define KEY_tr			232
#define KEY_try			233
#define KEY_truncate		234
#define KEY_uc			235
#define KEY_ucfirst		236
#define KEY_umask		237
#define KEY_undef		238
#define KEY_unless		239
#define KEY_unlink		240
#define KEY_unpack		241
#define KEY_unshift		242
#define KEY_untie		243
#define KEY_until		244
#define KEY_use			245
#define KEY_utime		246
#define KEY_values		247
#define KEY_vec			248
#define KEY_wait		249
#define KEY_waitpid		250
#define KEY_wantarray		251
#define KEY_warn		252
#define KEY_when		253
#define KEY_while		254
#define KEY_write		255
#define KEY_x			256
#define KEY_xor			257
#define KEY_y			258

/* Generated from:
 * de1ee232f68ea8ae75d09f4f70b58fee8a6e6244dec3ab68baab54f7af9ce306 regen/keywords.pl
 * ex: set ro: */
