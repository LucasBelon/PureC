let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Learning/NumberFour
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
set stal=2
tabnew
tabnew
tabnew
tabnew
tabnew
tabrewind
edit CompilingExample/main.c
argglobal
balt CompilingExample
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
6
normal! zo
let s:l = 12 - ((11 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 12
normal! 0
tabnext
edit CompilingExample/lib1.c
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
argglobal
balt CompilingExample/lib2.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour/CompilingExample
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFour/CompilingExample/lib2.c") | buffer ~/C_Learning/NumberFour/CompilingExample/lib2.c | else | edit ~/C_Learning/NumberFour/CompilingExample/lib2.c | endif
balt ~/C_Learning/NumberFour/CompilingExample/lib1.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 7 - ((6 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 7
normal! 027|
lcd ~/C_Learning/NumberFour/CompilingExample
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberFour/CompilingExample/lib1.h
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
exe 'vert 1resize ' . ((&columns * 52 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 53 + 53) / 106)
argglobal
balt ~/C_Learning/NumberFour/CompilingExample/lib2.h
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 3 - ((2 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 3
normal! 0
lcd ~/C_Learning/NumberFour
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFour/CompilingExample/lib2.h") | buffer ~/C_Learning/NumberFour/CompilingExample/lib2.h | else | edit ~/C_Learning/NumberFour/CompilingExample/lib2.h | endif
balt ~/C_Learning/NumberFour/CompilingExample/lib1.h
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour
wincmd w
exe 'vert 1resize ' . ((&columns * 52 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 53 + 53) / 106)
tabnext
edit ~/C_Learning/NumberFour/CompilingExample/Makefile
argglobal
balt ~/C_Learning/NumberFour/CompilingExample/What_was_done.txt
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 11 - ((10 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 11
normal! 0
lcd ~/C_Learning/NumberFour/CompilingExample
tabnext
edit ~/C_Learning/NumberFour/CompilingExample/What_was_done.txt
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
argglobal
balt ~/C_Learning/NumberFour/whatIdidntWrote.txt
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
2
normal! zo
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour/CompilingExample
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFour/whatIdidntWrote.txt") | buffer ~/C_Learning/NumberFour/whatIdidntWrote.txt | else | edit ~/C_Learning/NumberFour/whatIdidntWrote.txt | endif
balt ~/C_Learning/NumberFour/CompilingExample/What_was_done.txt
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour/CompilingExample
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberFour/debbuging/main.c
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour
wincmd w
argglobal
if bufexists("~/C_Learning/NumberFour/debbuging/HowToDebbug.txt") | buffer ~/C_Learning/NumberFour/debbuging/HowToDebbug.txt | else | edit ~/C_Learning/NumberFour/debbuging/HowToDebbug.txt | endif
balt ~/C_Learning/NumberFour/debbuging/main.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberFour
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext 1
set stal=1
badd +0 ~/C_Learning/NumberFour/CompilingExample/main.c
badd +1 ~/C_Learning/NumberFour/CompilingExample/lib1.c
badd +1 ~/C_Learning/NumberFour/CompilingExample/lib1.h
badd +1 ~/C_Learning/NumberFour/CompilingExample/Makefile
badd +1 ~/C_Learning/NumberFour/debbuging/main.c
badd +1 ~/C_Learning/NumberFour/CompilingExample
badd +1 ~/C_Learning/NumberFour/CompilingExample/lib2.c
badd +1 ~/C_Learning/NumberFour/CompilingExample/lib2.h
badd +1 ~/C_Learning/NumberFour/CompilingExample/What_was_done.txt
badd +1 ~/C_Learning/NumberFour/whatIdidntWrote.txt
badd +1 ~/C_Learning/NumberFour/debbuging/HowToDebbug.txt
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
