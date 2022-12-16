let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/LearnLibs/05limits
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +14 anotacoes.c
badd +0 anotacoes.txt
argglobal
%argdel
$argadd anotacoes.c
$argadd anotacoes.txt
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit anotacoes.txt
argglobal
if bufexists(fnamemodify("anotacoes.txt", ":p")) | buffer anotacoes.txt | else | edit anotacoes.txt | endif
balt anotacoes.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 24 - ((17 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 24
normal! 010|
tabnext
edit ~/C_Slago/LearnLibs/05limits
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
exe 'vert 1resize ' . ((&columns * 20 + 27) / 54)
exe '2resize ' . ((&lines * 17 + 11) / 22)
exe 'vert 2resize ' . ((&columns * 33 + 27) / 54)
exe '3resize ' . ((&lines * 1 + 11) / 22)
exe 'vert 3resize ' . ((&columns * 33 + 27) / 54)
argglobal
if bufexists(fnamemodify("~/C_Slago/LearnLibs/05limits", ":p")) | buffer ~/C_Slago/LearnLibs/05limits | else | edit ~/C_Slago/LearnLibs/05limits | endif
balt anotacoes.txt
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 8 - ((7 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 8
normal! 0
lcd ~/C_Slago/LearnLibs/05limits
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/LearnLibs/05limits/anotacoes.c", ":p")) | buffer ~/C_Slago/LearnLibs/05limits/anotacoes.c | else | edit ~/C_Slago/LearnLibs/05limits/anotacoes.c | endif
balt ~/C_Slago/LearnLibs/05limits/anotacoes.txt
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 15 - ((2 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 15
normal! 05|
wincmd w
argglobal
terminal ++curwin ++cols=33 ++rows=1 
let s:term_buf_9 = bufnr()
balt ~/C_Slago/LearnLibs/05limits/anotacoes.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 0) / 1)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
2wincmd w
exe 'vert 1resize ' . ((&columns * 20 + 27) / 54)
exe '2resize ' . ((&lines * 17 + 11) / 22)
exe 'vert 2resize ' . ((&columns * 33 + 27) / 54)
exe '3resize ' . ((&lines * 1 + 11) / 22)
exe 'vert 3resize ' . ((&columns * 33 + 27) / 54)
tabnext 2
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
