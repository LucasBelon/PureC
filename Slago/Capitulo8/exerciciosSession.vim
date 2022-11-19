let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Slago/Capitulo8
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +0 EX81_cat.c
badd +0 EX82_stdout.c
badd +0 EX83_Copia_Arquivo.c
badd +1 EX84_criptoSenha.c
badd +1 Simplifica_Sintaxe.c
argglobal
%argdel
$argadd EX81_cat.c
$argadd EX82_stdout.c
$argadd EX83_Copia_Arquivo.c
$argadd EX84_criptoSenha.c
$argadd Simplifica_Sintaxe.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit EX81_cat.c
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
exe '1resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 1resize ' . ((&columns * 84 + 84) / 168)
exe '2resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 2resize ' . ((&columns * 83 + 84) / 168)
exe '3resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 3resize ' . ((&columns * 84 + 84) / 168)
exe '4resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 4resize ' . ((&columns * 83 + 84) / 168)
argglobal
balt EX82_stdout.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 10) / 20)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX82_stdout.c", ":p")) | buffer EX82_stdout.c | else | edit EX82_stdout.c | endif
balt EX83_Copia_Arquivo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 10) / 20)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX83_Copia_Arquivo.c", ":p")) | buffer EX83_Copia_Arquivo.c | else | edit EX83_Copia_Arquivo.c | endif
balt EX84_criptoSenha.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX84_criptoSenha.c", ":p")) | buffer EX84_criptoSenha.c | else | edit EX84_criptoSenha.c | endif
balt EX83_Copia_Arquivo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 1resize ' . ((&columns * 84 + 84) / 168)
exe '2resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 2resize ' . ((&columns * 83 + 84) / 168)
exe '3resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 3resize ' . ((&columns * 84 + 84) / 168)
exe '4resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 4resize ' . ((&columns * 83 + 84) / 168)
tabnext
edit Simplifica_Sintaxe.c
argglobal
if bufexists(fnamemodify("Simplifica_Sintaxe.c", ":p")) | buffer Simplifica_Sintaxe.c | else | edit Simplifica_Sintaxe.c | endif
balt EX84_criptoSenha.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
9
normal! zo
let s:l = 15 - ((14 * winheight(0) + 20) / 40)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 15
normal! 0
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
