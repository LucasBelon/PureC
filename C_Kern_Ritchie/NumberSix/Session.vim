let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/C_Kern_Ritchie/NumberSix
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 01-1StructuresIntro.c
badd +1 01-2StructuresAndFunctions.c
badd +1 01-3ArrayOfStruct.c
badd +1 01-4Fields.c
badd +1 01-5Unions.c
badd +1 01-6Typedef.c
badd +1 README.md
badd +1 playingWithArraysAndPointers.c
argglobal
%argdel
$argadd 01-1StructuresIntro.c
$argadd 01-2StructuresAndFunctions.c
$argadd 01-3ArrayOfStruct.c
$argadd 01-4Fields.c
$argadd 01-5Unions.c
$argadd 01-6Typedef.c
$argadd README.md
$argadd playingWithArraysAndPointers.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit 01-1StructuresIntro.c
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
if bufexists(fnamemodify("01-2StructuresAndFunctions.c", ":p")) | buffer 01-2StructuresAndFunctions.c | else | edit 01-2StructuresAndFunctions.c | endif
balt 01-1StructuresIntro.c
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
if bufexists(fnamemodify("01-3ArrayOfStruct.c", ":p")) | buffer 01-3ArrayOfStruct.c | else | edit 01-3ArrayOfStruct.c | endif
balt 01-2StructuresAndFunctions.c
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
if bufexists(fnamemodify("01-4Fields.c", ":p")) | buffer 01-4Fields.c | else | edit 01-4Fields.c | endif
balt 01-3ArrayOfStruct.c
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
edit 01-5Unions.c
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
if bufexists(fnamemodify("01-5Unions.c", ":p")) | buffer 01-5Unions.c | else | edit 01-5Unions.c | endif
balt 01-4Fields.c
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
if bufexists(fnamemodify("01-6Typedef.c", ":p")) | buffer 01-6Typedef.c | else | edit 01-6Typedef.c | endif
balt 01-5Unions.c
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
if bufexists(fnamemodify("README.md", ":p")) | buffer README.md | else | edit README.md | endif
balt 01-6Typedef.c
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
if bufexists(fnamemodify("playingWithArraysAndPointers.c", ":p")) | buffer playingWithArraysAndPointers.c | else | edit playingWithArraysAndPointers.c | endif
balt README.md
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
tabnext 1
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
