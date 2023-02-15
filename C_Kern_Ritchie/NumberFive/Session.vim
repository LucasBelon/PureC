let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/C_Kern_Ritchie/NumberFive
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 01-1PointerIntro.c
badd +1 01-2PointerInFunc.c
badd +1 01-3Pointers.c
badd +1 01-4PointersVsIndex.c
badd +1 01-5PointersVsIndexV2.c
badd +1 02-1AritmeticsWithPointers.c
badd +1 02-2PointersCharFunc.c
badd +1 02-3AnotherExample.c
badd +1 02-4MultiDimensionalArrays.c
badd +1 03-1ArgcArgv.c
badd +1 03-2ShellOptions.c
badd +1 README.md
argglobal
%argdel
$argadd 01-1PointerIntro.c
$argadd 01-2PointerInFunc.c
$argadd 01-3Pointers.c
$argadd 01-4PointersVsIndex.c
$argadd 01-5PointersVsIndexV2.c
$argadd 02-1AritmeticsWithPointers.c
$argadd 02-2PointersCharFunc.c
$argadd 02-3AnotherExample.c
$argadd 02-4MultiDimensionalArrays.c
$argadd 03-1ArgcArgv.c
$argadd 03-2ShellOptions.c
$argadd README.md
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit 01-1PointerIntro.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
split
1wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
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
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("01-2PointerInFunc.c", ":p")) | buffer 01-2PointerInFunc.c | else | edit 01-2PointerInFunc.c | endif
balt 01-1PointerIntro.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("01-3Pointers.c", ":p")) | buffer 01-3Pointers.c | else | edit 01-3Pointers.c | endif
balt 01-2PointerInFunc.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("01-4PointersVsIndex.c", ":p")) | buffer 01-4PointersVsIndex.c | else | edit 01-4PointersVsIndex.c | endif
balt 01-3Pointers.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit 01-5PointersVsIndexV2.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
split
1wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("01-5PointersVsIndexV2.c", ":p")) | buffer 01-5PointersVsIndexV2.c | else | edit 01-5PointersVsIndexV2.c | endif
balt 01-4PointersVsIndex.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("02-1AritmeticsWithPointers.c", ":p")) | buffer 02-1AritmeticsWithPointers.c | else | edit 02-1AritmeticsWithPointers.c | endif
balt 01-5PointersVsIndexV2.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("02-2PointersCharFunc.c", ":p")) | buffer 02-2PointersCharFunc.c | else | edit 02-2PointersCharFunc.c | endif
balt 02-1AritmeticsWithPointers.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("02-3AnotherExample.c", ":p")) | buffer 02-3AnotherExample.c | else | edit 02-3AnotherExample.c | endif
balt 02-2PointersCharFunc.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit 02-4MultiDimensionalArrays.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
split
1wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("02-4MultiDimensionalArrays.c", ":p")) | buffer 02-4MultiDimensionalArrays.c | else | edit 02-4MultiDimensionalArrays.c | endif
balt 02-3AnotherExample.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("03-1ArgcArgv.c", ":p")) | buffer 03-1ArgcArgv.c | else | edit 03-1ArgcArgv.c | endif
balt 02-4MultiDimensionalArrays.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("03-2ShellOptions.c", ":p")) | buffer 03-2ShellOptions.c | else | edit 03-2ShellOptions.c | endif
balt 03-1ArgcArgv.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("README.md", ":p")) | buffer README.md | else | edit README.md | endif
balt 03-2ShellOptions.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
4wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext 3
set stal=1
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20
let &shortmess = s:shortmess_save
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
