let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Capitulo7
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 exemplo710_Incr_Decr.c
badd +1 exemplo711_Pont_Ints.c
badd +1 exemplo712_Matriz_Vet.c
badd +1 exemplo713_Matriz_Pont.c
badd +1 exemplo715_Eco.c
badd +1 exemplo716_Grafico.c
badd +1 exemplo717_Dia_Da_Semana.c
badd +1 exemplo719_Pont_Func.c
badd +1 exemplo71_Pont_Const.c
badd +1 exemplo720_Vet_Pont_Func.c
badd +1 exemplo721_Redundancia_De_Codigo.c
badd +1 exemplo722_Eliminando_Redundancia.c
badd +1 exemplo723_Pont_Estru.c
badd +1 exemplo724_Operador_Seta.c
badd +1 exemplo725_Vet_Dinamic.c
badd +1 exemplo726_Free.c
badd +1 exemplo727_Tudo.c
badd +1 exemplo72_Atribuindo_Endereco.c
badd +1 exemplo73_Acessando.c
badd +1 exemplo74_Incompativeis.c
badd +1 exemplo75_Passagem_Ref.c
badd +1 exemplo76_Usando_Ref.c
badd +1 exemplo77_Multi_Camada.c
badd +1 exemplo78_Notacao_Pont_Vet.c
badd +1 exemplo79_Aritimetica.c
badd +1 exemplo728_Lista_Encadeada.c
badd +1 exemplo729_insere.c
badd +1 exemplo730_Vendo_Funcionar.c
badd +1 exemplo731_remove.c
badd +1 exemplo732_acessa.c
badd +1 exemplo733_insere_qqr.c
badd +1 exemplo734_remove_qqr.c
badd +1 exemplo735_alterando.c
argglobal
%argdel
$argadd exemplo710_Incr_Decr.c
$argadd exemplo711_Pont_Ints.c
$argadd exemplo712_Matriz_Vet.c
$argadd exemplo713_Matriz_Pont.c
$argadd exemplo715_Eco.c
$argadd exemplo716_Grafico.c
$argadd exemplo717_Dia_Da_Semana.c
$argadd exemplo719_Pont_Func.c
$argadd exemplo71_Pont_Const.c
$argadd exemplo720_Vet_Pont_Func.c
$argadd exemplo721_Redundancia_De_Codigo.c
$argadd exemplo722_Eliminando_Redundancia.c
$argadd exemplo723_Pont_Estru.c
$argadd exemplo724_Operador_Seta.c
$argadd exemplo725_Vet_Dinamic.c
$argadd exemplo726_Free.c
$argadd exemplo727_Tudo.c
$argadd exemplo72_Atribuindo_Endereco.c
$argadd exemplo73_Acessando.c
$argadd exemplo74_Incompativeis.c
$argadd exemplo75_Passagem_Ref.c
$argadd exemplo76_Usando_Ref.c
$argadd exemplo77_Multi_Camada.c
$argadd exemplo78_Notacao_Pont_Vet.c
$argadd exemplo79_Aritimetica.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit exemplo71_Pont_Const.c
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
if bufexists(fnamemodify("exemplo71_Pont_Const.c", ":p")) | buffer exemplo71_Pont_Const.c | else | edit exemplo71_Pont_Const.c | endif
balt exemplo72_Atribuindo_Endereco.c
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
if bufexists(fnamemodify("exemplo72_Atribuindo_Endereco.c", ":p")) | buffer exemplo72_Atribuindo_Endereco.c | else | edit exemplo72_Atribuindo_Endereco.c | endif
balt exemplo71_Pont_Const.c
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
if bufexists(fnamemodify("exemplo73_Acessando.c", ":p")) | buffer exemplo73_Acessando.c | else | edit exemplo73_Acessando.c | endif
balt exemplo72_Atribuindo_Endereco.c
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
if bufexists(fnamemodify("exemplo74_Incompativeis.c", ":p")) | buffer exemplo74_Incompativeis.c | else | edit exemplo74_Incompativeis.c | endif
balt exemplo73_Acessando.c
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
edit exemplo75_Passagem_Ref.c
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
if bufexists(fnamemodify("exemplo75_Passagem_Ref.c", ":p")) | buffer exemplo75_Passagem_Ref.c | else | edit exemplo75_Passagem_Ref.c | endif
balt exemplo74_Incompativeis.c
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
if bufexists(fnamemodify("exemplo76_Usando_Ref.c", ":p")) | buffer exemplo76_Usando_Ref.c | else | edit exemplo76_Usando_Ref.c | endif
balt exemplo75_Passagem_Ref.c
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
if bufexists(fnamemodify("exemplo77_Multi_Camada.c", ":p")) | buffer exemplo77_Multi_Camada.c | else | edit exemplo77_Multi_Camada.c | endif
balt exemplo76_Usando_Ref.c
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
if bufexists(fnamemodify("exemplo78_Notacao_Pont_Vet.c", ":p")) | buffer exemplo78_Notacao_Pont_Vet.c | else | edit exemplo78_Notacao_Pont_Vet.c | endif
balt exemplo77_Multi_Camada.c
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
edit exemplo79_Aritimetica.c
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
if bufexists(fnamemodify("exemplo79_Aritimetica.c", ":p")) | buffer exemplo79_Aritimetica.c | else | edit exemplo79_Aritimetica.c | endif
balt exemplo78_Notacao_Pont_Vet.c
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
if bufexists(fnamemodify("exemplo710_Incr_Decr.c", ":p")) | buffer exemplo710_Incr_Decr.c | else | edit exemplo710_Incr_Decr.c | endif
balt exemplo79_Aritimetica.c
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
if bufexists(fnamemodify("exemplo711_Pont_Ints.c", ":p")) | buffer exemplo711_Pont_Ints.c | else | edit exemplo711_Pont_Ints.c | endif
balt exemplo710_Incr_Decr.c
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
if bufexists(fnamemodify("exemplo712_Matriz_Vet.c", ":p")) | buffer exemplo712_Matriz_Vet.c | else | edit exemplo712_Matriz_Vet.c | endif
balt exemplo711_Pont_Ints.c
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
edit exemplo713_Matriz_Pont.c
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
if bufexists(fnamemodify("exemplo713_Matriz_Pont.c", ":p")) | buffer exemplo713_Matriz_Pont.c | else | edit exemplo713_Matriz_Pont.c | endif
balt exemplo712_Matriz_Vet.c
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
if bufexists(fnamemodify("exemplo715_Eco.c", ":p")) | buffer exemplo715_Eco.c | else | edit exemplo715_Eco.c | endif
balt exemplo713_Matriz_Pont.c
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
if bufexists(fnamemodify("exemplo716_Grafico.c", ":p")) | buffer exemplo716_Grafico.c | else | edit exemplo716_Grafico.c | endif
balt exemplo715_Eco.c
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
if bufexists(fnamemodify("exemplo717_Dia_Da_Semana.c", ":p")) | buffer exemplo717_Dia_Da_Semana.c | else | edit exemplo717_Dia_Da_Semana.c | endif
balt exemplo716_Grafico.c
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
edit exemplo719_Pont_Func.c
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
if bufexists(fnamemodify("exemplo719_Pont_Func.c", ":p")) | buffer exemplo719_Pont_Func.c | else | edit exemplo719_Pont_Func.c | endif
balt exemplo717_Dia_Da_Semana.c
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
if bufexists(fnamemodify("exemplo720_Vet_Pont_Func.c", ":p")) | buffer exemplo720_Vet_Pont_Func.c | else | edit exemplo720_Vet_Pont_Func.c | endif
balt exemplo71_Pont_Const.c
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
if bufexists(fnamemodify("exemplo721_Redundancia_De_Codigo.c", ":p")) | buffer exemplo721_Redundancia_De_Codigo.c | else | edit exemplo721_Redundancia_De_Codigo.c | endif
balt exemplo720_Vet_Pont_Func.c
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
if bufexists(fnamemodify("exemplo722_Eliminando_Redundancia.c", ":p")) | buffer exemplo722_Eliminando_Redundancia.c | else | edit exemplo722_Eliminando_Redundancia.c | endif
balt exemplo721_Redundancia_De_Codigo.c
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
edit exemplo723_Pont_Estru.c
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
if bufexists(fnamemodify("exemplo723_Pont_Estru.c", ":p")) | buffer exemplo723_Pont_Estru.c | else | edit exemplo723_Pont_Estru.c | endif
balt exemplo722_Eliminando_Redundancia.c
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
normal! 014|
wincmd w
argglobal
if bufexists(fnamemodify("exemplo724_Operador_Seta.c", ":p")) | buffer exemplo724_Operador_Seta.c | else | edit exemplo724_Operador_Seta.c | endif
balt exemplo723_Pont_Estru.c
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
if bufexists(fnamemodify("exemplo725_Vet_Dinamic.c", ":p")) | buffer exemplo725_Vet_Dinamic.c | else | edit exemplo725_Vet_Dinamic.c | endif
balt exemplo724_Operador_Seta.c
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
if bufexists(fnamemodify("exemplo726_Free.c", ":p")) | buffer exemplo726_Free.c | else | edit exemplo726_Free.c | endif
balt exemplo725_Vet_Dinamic.c
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
edit exemplo727_Tudo.c
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
if bufexists(fnamemodify("exemplo727_Tudo.c", ":p")) | buffer exemplo727_Tudo.c | else | edit exemplo727_Tudo.c | endif
balt exemplo726_Free.c
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
if bufexists(fnamemodify("exemplo728_Lista_Encadeada.c", ":p")) | buffer exemplo728_Lista_Encadeada.c | else | edit exemplo728_Lista_Encadeada.c | endif
balt exemplo727_Tudo.c
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
if bufexists(fnamemodify("exemplo729_insere.c", ":p")) | buffer exemplo729_insere.c | else | edit exemplo729_insere.c | endif
balt exemplo727_Tudo.c
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
if bufexists(fnamemodify("exemplo730_Vendo_Funcionar.c", ":p")) | buffer exemplo730_Vendo_Funcionar.c | else | edit exemplo730_Vendo_Funcionar.c | endif
balt exemplo727_Tudo.c
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
edit exemplo731_remove.c
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
exe '1resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 1resize ' . ((&columns * 84 + 84) / 168)
exe '2resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 2resize ' . ((&columns * 83 + 84) / 168)
exe '3resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 3resize ' . ((&columns * 83 + 84) / 168)
exe '4resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 4resize ' . ((&columns * 84 + 84) / 168)
argglobal
if bufexists(fnamemodify("exemplo731_remove.c", ":p")) | buffer exemplo731_remove.c | else | edit exemplo731_remove.c | endif
balt exemplo730_Vendo_Funcionar.c
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
if bufexists(fnamemodify("exemplo732_acessa.c", ":p")) | buffer exemplo732_acessa.c | else | edit exemplo732_acessa.c | endif
balt exemplo730_Vendo_Funcionar.c
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
normal! 03|
wincmd w
argglobal
if bufexists(fnamemodify("exemplo733_insere_qqr.c", ":p")) | buffer exemplo733_insere_qqr.c | else | edit exemplo733_insere_qqr.c | endif
balt exemplo730_Vendo_Funcionar.c
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
if bufexists(fnamemodify("exemplo734_remove_qqr.c", ":p")) | buffer exemplo734_remove_qqr.c | else | edit exemplo734_remove_qqr.c | endif
balt exemplo730_Vendo_Funcionar.c
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
exe '1resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 1resize ' . ((&columns * 84 + 84) / 168)
exe '2resize ' . ((&lines * 19 + 21) / 43)
exe 'vert 2resize ' . ((&columns * 83 + 84) / 168)
exe '3resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 3resize ' . ((&columns * 83 + 84) / 168)
exe '4resize ' . ((&lines * 20 + 21) / 43)
exe 'vert 4resize ' . ((&columns * 84 + 84) / 168)
tabnext
edit exemplo735_alterando.c
argglobal
if bufexists(fnamemodify("exemplo735_alterando.c", ":p")) | buffer exemplo735_alterando.c | else | edit exemplo735_alterando.c | endif
balt exemplo734_remove_qqr.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 20) / 40)
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
