let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Capitulo8
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 exemplo811_Exibindo_Conteudo.c
badd +1 exemplo81_Variaveis_Arquivo.c
badd +1 exemplo82_Enviando.c
badd +1 exemplo83_Cat.c
badd +1 exemplo87_Abrindo_Arquivo.c
badd +1 exemplo88_Gravando_Arquivo.c
badd +1 exemplo89_Fechando.c
argglobal
%argdel
$argadd exemplo811_Exibindo_Conteudo.c
$argadd exemplo81_Variaveis_Arquivo.c
$argadd exemplo82_Enviando.c
$argadd exemplo83_Cat.c
$argadd exemplo87_Abrindo_Arquivo.c
$argadd exemplo88_Gravando_Arquivo.c
$argadd exemplo89_Fechando.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit exemplo81_Variaveis_Arquivo.c
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
exe '1resize ' . ((&lines * 16 + 17) / 35)
exe 'vert 1resize ' . ((&columns * 36 + 36) / 72)
exe '2resize ' . ((&lines * 16 + 17) / 35)
exe 'vert 2resize ' . ((&columns * 35 + 36) / 72)
exe '3resize ' . ((&lines * 15 + 17) / 35)
exe 'vert 3resize ' . ((&columns * 36 + 36) / 72)
exe '4resize ' . ((&lines * 15 + 17) / 35)
exe 'vert 4resize ' . ((&columns * 35 + 36) / 72)
argglobal
if bufexists(fnamemodify("exemplo81_Variaveis_Arquivo.c", ":p")) | buffer exemplo81_Variaveis_Arquivo.c | else | edit exemplo81_Variaveis_Arquivo.c | endif
balt exemplo811_Exibindo_Conteudo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 16)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo82_Enviando.c", ":p")) | buffer exemplo82_Enviando.c | else | edit exemplo82_Enviando.c | endif
balt exemplo81_Variaveis_Arquivo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 16)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo83_Cat.c", ":p")) | buffer exemplo83_Cat.c | else | edit exemplo83_Cat.c | endif
balt exemplo82_Enviando.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
12
normal! zo
let s:l = 1 - ((0 * winheight(0) + 7) / 15)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo87_Abrindo_Arquivo.c", ":p")) | buffer exemplo87_Abrindo_Arquivo.c | else | edit exemplo87_Abrindo_Arquivo.c | endif
balt exemplo83_Cat.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 7) / 15)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 16 + 17) / 35)
exe 'vert 1resize ' . ((&columns * 36 + 36) / 72)
exe '2resize ' . ((&lines * 16 + 17) / 35)
exe 'vert 2resize ' . ((&columns * 35 + 36) / 72)
exe '3resize ' . ((&lines * 15 + 17) / 35)
exe 'vert 3resize ' . ((&columns * 36 + 36) / 72)
exe '4resize ' . ((&lines * 15 + 17) / 35)
exe 'vert 4resize ' . ((&columns * 35 + 36) / 72)
tabnext
edit exemplo88_Gravando_Arquivo.c
argglobal
if bufexists(fnamemodify("exemplo88_Gravando_Arquivo.c", ":p")) | buffer exemplo88_Gravando_Arquivo.c | else | edit exemplo88_Gravando_Arquivo.c | endif
balt exemplo87_Abrindo_Arquivo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 16) / 32)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
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
