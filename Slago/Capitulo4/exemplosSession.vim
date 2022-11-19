let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Slago/Capitulo4
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 exemplo410_Recurs_Sem_Fim.c
badd +1 exemplo411_Pot_Recursiva.c
badd +1 exemplo41_Define.c
badd +1 exemplo42_Include_Header.c
badd +1 exemplo43_Func_Fic.c
badd +1 exemplo46_Hip.c
badd +1 exemplo47_max.c
badd +1 exemplo48_Tipos_Armazenamento.c
argglobal
%argdel
$argadd exemplo410_Recurs_Sem_Fim.c
$argadd exemplo411_Pot_Recursiva.c
$argadd exemplo41_Define.c
$argadd exemplo42_Include_Header.c
$argadd exemplo43_Func_Fic.c
$argadd exemplo46_Hip.c
$argadd exemplo47_max.c
$argadd exemplo48_Tipos_Armazenamento.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit exemplo41_Define.c
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
if bufexists(fnamemodify("exemplo41_Define.c", ":p")) | buffer exemplo41_Define.c | else | edit exemplo41_Define.c | endif
balt exemplo411_Pot_Recursiva.c
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
if bufexists(fnamemodify("exemplo42_Include_Header.c", ":p")) | buffer exemplo42_Include_Header.c | else | edit exemplo42_Include_Header.c | endif
balt exemplo41_Define.c
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
if bufexists(fnamemodify("exemplo43_Func_Fic.c", ":p")) | buffer exemplo43_Func_Fic.c | else | edit exemplo43_Func_Fic.c | endif
balt exemplo42_Include_Header.c
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
if bufexists(fnamemodify("exemplo46_Hip.c", ":p")) | buffer exemplo46_Hip.c | else | edit exemplo46_Hip.c | endif
balt exemplo43_Func_Fic.c
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
edit exemplo47_max.c
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
if bufexists(fnamemodify("exemplo47_max.c", ":p")) | buffer exemplo47_max.c | else | edit exemplo47_max.c | endif
balt exemplo46_Hip.c
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
if bufexists(fnamemodify("exemplo48_Tipos_Armazenamento.c", ":p")) | buffer exemplo48_Tipos_Armazenamento.c | else | edit exemplo48_Tipos_Armazenamento.c | endif
balt exemplo47_max.c
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
if bufexists(fnamemodify("exemplo410_Recurs_Sem_Fim.c", ":p")) | buffer exemplo410_Recurs_Sem_Fim.c | else | edit exemplo410_Recurs_Sem_Fim.c | endif
balt exemplo48_Tipos_Armazenamento.c
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
if bufexists(fnamemodify("exemplo411_Pot_Recursiva.c", ":p")) | buffer exemplo411_Pot_Recursiva.c | else | edit exemplo411_Pot_Recursiva.c | endif
balt exemplo41_Define.c
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
