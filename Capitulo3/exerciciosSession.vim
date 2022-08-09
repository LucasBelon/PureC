let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Capitulo3
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 EX310_Digito_Verificador.c
badd +1 EX311_Numero_Triangular.c
badd +1 EX314_MinMax.c
badd +1 EX315_Desconto.c
badd +1 EX316_Cred_Deb.c
badd +1 EX31_Reescreva_Compacto.c
badd +1 EX32_Prejeva_a_Saida.c
badd +1 EX33_Regressivo.c
badd +1 EX34_Converte_Pol.c
badd +1 EX35_Pot_Natural.c
badd +1 EX36_Fat.c
badd +1 EX37_Pot_Soma_Impares.c
badd +1 EX38_Fibo.c
badd +1 EX39_Exibe_Quadrado.c
argglobal
%argdel
$argadd EX310_Digito_Verificador.c
$argadd EX311_Numero_Triangular.c
$argadd EX314_MinMax.c
$argadd EX315_Desconto.c
$argadd EX316_Cred_Deb.c
$argadd EX31_Reescreva_Compacto.c
$argadd EX32_Prejeva_a_Saida.c
$argadd EX33_Regressivo.c
$argadd EX34_Converte_Pol.c
$argadd EX35_Pot_Natural.c
$argadd EX36_Fat.c
$argadd EX37_Pot_Soma_Impares.c
$argadd EX38_Fibo.c
$argadd EX39_Exibe_Quadrado.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit EX31_Reescreva_Compacto.c
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
exe '1resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
argglobal
if bufexists(fnamemodify("EX31_Reescreva_Compacto.c", ":p")) | buffer EX31_Reescreva_Compacto.c | else | edit EX31_Reescreva_Compacto.c | endif
balt EX316_Cred_Deb.c
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
if bufexists(fnamemodify("EX32_Prejeva_a_Saida.c", ":p")) | buffer EX32_Prejeva_a_Saida.c | else | edit EX32_Prejeva_a_Saida.c | endif
balt EX31_Reescreva_Compacto.c
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
if bufexists(fnamemodify("EX33_Regressivo.c", ":p")) | buffer EX33_Regressivo.c | else | edit EX33_Regressivo.c | endif
balt EX32_Prejeva_a_Saida.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX34_Converte_Pol.c", ":p")) | buffer EX34_Converte_Pol.c | else | edit EX34_Converte_Pol.c | endif
balt EX33_Regressivo.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
tabnext
edit EX35_Pot_Natural.c
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
exe '1resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
argglobal
if bufexists(fnamemodify("EX35_Pot_Natural.c", ":p")) | buffer EX35_Pot_Natural.c | else | edit EX35_Pot_Natural.c | endif
balt EX34_Converte_Pol.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX36_Fat.c", ":p")) | buffer EX36_Fat.c | else | edit EX36_Fat.c | endif
balt EX35_Pot_Natural.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX37_Pot_Soma_Impares.c", ":p")) | buffer EX37_Pot_Soma_Impares.c | else | edit EX37_Pot_Soma_Impares.c | endif
balt EX36_Fat.c
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
if bufexists(fnamemodify("EX38_Fibo.c", ":p")) | buffer EX38_Fibo.c | else | edit EX38_Fibo.c | endif
balt EX37_Pot_Soma_Impares.c
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
exe '1resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
tabnext
edit EX39_Exibe_Quadrado.c
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
exe '1resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
argglobal
if bufexists(fnamemodify("EX39_Exibe_Quadrado.c", ":p")) | buffer EX39_Exibe_Quadrado.c | else | edit EX39_Exibe_Quadrado.c | endif
balt EX38_Fibo.c
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
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX310_Digito_Verificador.c", ":p")) | buffer EX310_Digito_Verificador.c | else | edit EX310_Digito_Verificador.c | endif
balt EX39_Exibe_Quadrado.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 6) / 12)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("EX311_Numero_Triangular.c", ":p")) | buffer EX311_Numero_Triangular.c | else | edit EX311_Numero_Triangular.c | endif
balt EX310_Digito_Verificador.c
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
if bufexists(fnamemodify("EX314_MinMax.c", ":p")) | buffer EX314_MinMax.c | else | edit EX314_MinMax.c | endif
balt EX311_Numero_Triangular.c
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
exe '1resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe '2resize ' . ((&lines * 12 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
exe '3resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 57 + 57) / 115)
exe '4resize ' . ((&lines * 13 + 14) / 29)
exe 'vert 4resize ' . ((&columns * 57 + 57) / 115)
tabnext
edit EX315_Desconto.c
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
if bufexists(fnamemodify("EX315_Desconto.c", ":p")) | buffer EX315_Desconto.c | else | edit EX315_Desconto.c | endif
balt EX314_MinMax.c
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
wincmd w
argglobal
if bufexists(fnamemodify("EX316_Cred_Deb.c", ":p")) | buffer EX316_Cred_Deb.c | else | edit EX316_Cred_Deb.c | endif
balt EX315_Desconto.c
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
wincmd w
exe 'vert 1resize ' . ((&columns * 57 + 57) / 115)
exe 'vert 2resize ' . ((&columns * 57 + 57) / 115)
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
