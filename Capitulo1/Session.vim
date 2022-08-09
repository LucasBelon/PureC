let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Capitulo1
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 ~/C_Slago/Capitulo1
badd +1 EX12_Circulo.c
badd +1 EX13_Media_Notas.c
badd +1 EX14_Km_Litro.c
badd +1 EX15_Dec_Oc_Hex.c
badd +1 EX16_Converte_Temperatura.c
badd +1 EX17_Pitagoras.c
badd +1 exemplo11_IMC.c
badd +1 exemplo12_Declara_Variavel.c
badd +1 exemplo13_Tipos_Modificados.c
badd +1 exemplo14_Scanf.c
badd +1 exemplo15_Printf.c
badd +1 exemplo16_Saida_Formatada.c
argglobal
%argdel
$argadd EX12_Circulo.c
$argadd EX13_Media_Notas.c
$argadd EX14_Km_Litro.c
$argadd EX15_Dec_Oc_Hex.c
$argadd EX16_Converte_Temperatura.c
$argadd EX17_Pitagoras.c
$argadd exemplo11_IMC.c
$argadd exemplo12_Declara_Variavel.c
$argadd exemplo13_Tipos_Modificados.c
$argadd exemplo14_Scanf.c
$argadd exemplo15_Printf.c
$argadd exemplo16_Saida_Formatada.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit EX12_Circulo.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
split
wincmd _ | wincmd |
split
2wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
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
exe '1resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
exe '5resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 5resize ' . ((&columns * 57 + 57) / 115)
exe '6resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 6resize ' . ((&columns * 57 + 57) / 115)
argglobal
balt EX13_Media_Notas.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
13
normal! zo
31
normal! zo
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX13_Media_Notas.c", ":p")) | buffer EX13_Media_Notas.c | else | edit EX13_Media_Notas.c | endif
balt EX12_Circulo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX14_Km_Litro.c", ":p")) | buffer EX14_Km_Litro.c | else | edit EX14_Km_Litro.c | endif
balt EX13_Media_Notas.c
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
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX15_Dec_Oc_Hex.c", ":p")) | buffer EX15_Dec_Oc_Hex.c | else | edit EX15_Dec_Oc_Hex.c | endif
balt EX14_Km_Litro.c
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
13
normal! zo
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX16_Converte_Temperatura.c", ":p")) | buffer EX16_Converte_Temperatura.c | else | edit EX16_Converte_Temperatura.c | endif
balt EX15_Dec_Oc_Hex.c
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
14
normal! zo
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX17_Pitagoras.c", ":p")) | buffer EX17_Pitagoras.c | else | edit EX17_Pitagoras.c | endif
balt EX16_Converte_Temperatura.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
exe '5resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 5resize ' . ((&columns * 57 + 57) / 115)
exe '6resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 6resize ' . ((&columns * 57 + 57) / 115)
tabnext
edit exemplo11_IMC.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
split
wincmd _ | wincmd |
split
2wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
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
exe '1resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
exe '5resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 5resize ' . ((&columns * 57 + 57) / 115)
exe '6resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 6resize ' . ((&columns * 57 + 57) / 115)
argglobal
if bufexists(fnamemodify("exemplo11_IMC.c", ":p")) | buffer exemplo11_IMC.c | else | edit exemplo11_IMC.c | endif
balt exemplo12_Declara_Variavel.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo12_Declara_Variavel.c", ":p")) | buffer exemplo12_Declara_Variavel.c | else | edit exemplo12_Declara_Variavel.c | endif
balt exemplo11_IMC.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo13_Tipos_Modificados.c", ":p")) | buffer exemplo13_Tipos_Modificados.c | else | edit exemplo13_Tipos_Modificados.c | endif
balt exemplo12_Declara_Variavel.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo14_Scanf.c", ":p")) | buffer exemplo14_Scanf.c | else | edit exemplo14_Scanf.c | endif
balt exemplo13_Tipos_Modificados.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo15_Printf.c", ":p")) | buffer exemplo15_Printf.c | else | edit exemplo15_Printf.c | endif
balt exemplo14_Scanf.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
53
normal! zo
61
normal! zo
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("exemplo16_Saida_Formatada.c", ":p")) | buffer exemplo16_Saida_Formatada.c | else | edit exemplo16_Saida_Formatada.c | endif
balt exemplo12_Declara_Variavel.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
exe '5resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 5resize ' . ((&columns * 57 + 57) / 115)
exe '6resize ' . ((&lines * 8 + 14) / 29)
exe 'vert 6resize ' . ((&columns * 57 + 57) / 115)
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
