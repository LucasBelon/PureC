let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Learning/NumberFive
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 01-1PointerIntro.c
badd +1 01-4PointersVsIndex.c
badd +1 02-1AritmeticsWithPointers.c
badd +1 02-3AnotherExample.c
badd +1 03-1ArgcArgv.c
badd +1 01-2PointerInFunc.c
badd +1 01-3Pointers.c
badd +1 01-5PointersVsIndexV2.c
badd +1 02-2PointersCharFunc.c
badd +37 02-4MultiDimensionalArrays.c
badd +1 03-2ShellOptions.c
argglobal
%argdel
$argadd 01-1PointerIntro.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit 01-1PointerIntro.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe '2resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
exe '3resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 56 + 57) / 115)
argglobal
balt 01-2PointerInFunc.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
7
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists("01-2PointerInFunc.c") | buffer 01-2PointerInFunc.c | else | edit 01-2PointerInFunc.c | endif
balt 01-3Pointers.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 13)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists("01-3Pointers.c") | buffer 01-3Pointers.c | else | edit 01-3Pointers.c | endif
balt 01-2PointerInFunc.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
30
normal! zo
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe '2resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
exe '3resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 56 + 57) / 115)
tabnext
edit 01-4PointersVsIndex.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
argglobal
balt 01-5PointersVsIndexV2.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
8
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFive/01-5PointersVsIndexV2.c") | buffer ~/C_Learning/NumberFive/01-5PointersVsIndexV2.c | else | edit ~/C_Learning/NumberFive/01-5PointersVsIndexV2.c | endif
balt ~/C_Learning/NumberFive/01-4PointersVsIndex.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
30
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
tabnext
edit ~/C_Learning/NumberFive/02-1AritmeticsWithPointers.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
argglobal
balt ~/C_Learning/NumberFive/02-2PointersCharFunc.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
17
normal! zo
30
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFive/02-2PointersCharFunc.c") | buffer ~/C_Learning/NumberFive/02-2PointersCharFunc.c | else | edit ~/C_Learning/NumberFive/02-2PointersCharFunc.c | endif
balt ~/C_Learning/NumberFive/02-1AritmeticsWithPointers.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
18
normal! zo
33
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
exe 'vert 1resize ' . ((&columns * 58 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 56 + 57) / 115)
tabnext
edit ~/C_Learning/NumberFive/02-3AnotherExample.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
argglobal
balt ~/C_Learning/NumberFive/02-4MultiDimensionalArrays.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
10
normal! zo
13
normal! zo
23
normal! zo
24
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFive/02-4MultiDimensionalArrays.c") | buffer ~/C_Learning/NumberFive/02-4MultiDimensionalArrays.c | else | edit ~/C_Learning/NumberFive/02-4MultiDimensionalArrays.c | endif
balt ~/C_Learning/NumberFive/02-3AnotherExample.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
tabnext
edit ~/C_Learning/NumberFive/03-1ArgcArgv.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 56 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 58 + 57) / 115)
argglobal
balt ~/C_Learning/NumberFive/03-2ShellOptions.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
19
normal! zo
34
normal! zo
50
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFive/03-2ShellOptions.c") | buffer ~/C_Learning/NumberFive/03-2ShellOptions.c | else | edit ~/C_Learning/NumberFive/03-2ShellOptions.c | endif
balt ~/C_Learning/NumberFive/03-1ArgcArgv.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
22
normal! zo
27
normal! zo
28
normal! zo
29
normal! zo
44
normal! zo
45
normal! zo
let s:l = 1 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFive
wincmd w
exe 'vert 1resize ' . ((&columns * 56 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 58 + 57) / 115)
tabnext 1
set stal=1
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToOS
let &winminheight = s:save_winminheight
let &winminwidth = s:save_winminwidth
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
