</$objtype/mkfile
CFLAGS=-FVw
ALFLAGS=-w

none:VQ:
	echo usage: mk all, install, installall, clean, nuke
&:V:
	mk $objtype.$stem

68020.&:VN:
	@{cd q; mk $stem }
	@{cd v; mk $stem }
	@{cd k; mk $stem }
	@{cd 8; mk $stem }

386.&:VN:
	@{cd q; mk $stem }
	@{cd v; mk $stem }
	@{cd k; mk $stem }
	@{cd 8; mk $stem }
	@{cd lib; mk $stem }

mips.&:VN:
	@{cd q; mk $stem }
	@{cd v; mk $stem }
	@{cd k; mk $stem }
	@{cd 8; mk $stem }
	@{cd lib; mk $stem }

sparc.&:VN:
	@{cd q; mk $stem }
	@{cd v; mk $stem }
	@{cd k; mk $stem }
	@{cd 8; mk $stem }
	@{cd lib; mk $stem }

power.&:VN:
	@{cd q; mk $stem }
	@{cd v; mk $stem }
	@{cd k; mk $stem }
	@{cd 8; mk $stem }
	@{cd lib; mk $stem }
