let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Slago/Capitulo2
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 EX210_Calc_Vaza_Switch.c
badd +1 EX211_Peso_Ideal.c
badd +1 EX212_Personalidade.c
badd +1 EX21_Preveja_a_saida.c
badd +1 EX22_Maior.c
badd +1 EX23_Bissexto.c
badd +1 EX24_Abs.c
badd +1 EX25_Reajuste_salarial.c
badd +1 EX26_Erro_Detectado.c
badd +1 EX27_Str_True_False.c
badd +1 EX28_Rec_Apr_Repr.c
badd +1 EX29_Bhaskara.c
argglobal
%argdel
$argadd EX210_Calc_Vaza_Switch.c
$argadd EX211_Peso_Ideal.c
$argadd EX212_Personalidade.c
$argadd EX21_Preveja_a_saida.c
$argadd EX22_Maior.c
$argadd EX23_Bissexto.c
$argadd EX24_Abs.c
$argadd EX25_Reajuste_salarial.c
$argadd EX26_Erro_Detectado.c
$argadd EX27_Str_True_False.c
$argadd EX28_Rec_Apr_Repr.c
$argadd EX29_Bhaskara.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit EX21_Preveja_a_saida.c
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
if bufexists(fnamemodify("EX21_Preveja_a_saida.c", ":p")) | buffer EX21_Preveja_a_saida.c | else | edit EX21_Preveja_a_saida.c | endif
balt EX212_Personalidade.c
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
if bufexists(fnamemodify("EX22_Maior.c", ":p")) | buffer EX22_Maior.c | else | edit EX22_Maior.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX23_Bissexto.c", ":p")) | buffer EX23_Bissexto.c | else | edit EX23_Bissexto.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX24_Abs.c", ":p")) | buffer EX24_Abs.c | else | edit EX24_Abs.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX25_Reajuste_salarial.c", ":p")) | buffer EX25_Reajuste_salarial.c | else | edit EX25_Reajuste_salarial.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX26_Erro_Detectado.c", ":p")) | buffer EX26_Erro_Detectado.c | else | edit EX26_Erro_Detectado.c | endif
balt EX210_Calc_Vaza_Switch.c
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
edit EX27_Str_True_False.c
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
if bufexists(fnamemodify("EX27_Str_True_False.c", ":p")) | buffer EX27_Str_True_False.c | else | edit EX27_Str_True_False.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX28_Rec_Apr_Repr.c", ":p")) | buffer EX28_Rec_Apr_Repr.c | else | edit EX28_Rec_Apr_Repr.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX29_Bhaskara.c", ":p")) | buffer EX29_Bhaskara.c | else | edit EX29_Bhaskara.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX210_Calc_Vaza_Switch.c", ":p")) | buffer EX210_Calc_Vaza_Switch.c | else | edit EX210_Calc_Vaza_Switch.c | endif
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
if bufexists(fnamemodify("EX211_Peso_Ideal.c", ":p")) | buffer EX211_Peso_Ideal.c | else | edit EX211_Peso_Ideal.c | endif
balt EX210_Calc_Vaza_Switch.c
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
if bufexists(fnamemodify("EX212_Personalidade.c", ":p")) | buffer EX212_Personalidade.c | else | edit EX212_Personalidade.c | endif
balt EX27_Str_True_False.c
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
