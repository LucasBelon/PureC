let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/Slago/Capitulo3
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 exemplo310_Break.c
badd +1 exemplo31_Forma_Compacta.c
badd +1 exemplo32_Incr_Decr.c
badd +1 exemplo33_Contagem.c
badd +1 exemplo35_Tabuada.c
badd +1 exemplo36_Itoa.c
badd +1 exemplo38_Digitos.c
argglobal
%argdel
$argadd exemplo310_Break.c
$argadd exemplo31_Forma_Compacta.c
$argadd exemplo32_Incr_Decr.c
$argadd exemplo33_Contagem.c
$argadd exemplo35_Tabuada.c
$argadd exemplo36_Itoa.c
$argadd exemplo38_Digitos.c
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit exemplo31_Forma_Compacta.c
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
if bufexists(fnamemodify("exemplo31_Forma_Compacta.c", ":p")) | buffer exemplo31_Forma_Compacta.c | else | edit exemplo31_Forma_Compacta.c | endif
balt exemplo310_Break.c
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
if bufexists(fnamemodify("exemplo32_Incr_Decr.c", ":p")) | buffer exemplo32_Incr_Decr.c | else | edit exemplo32_Incr_Decr.c | endif
balt exemplo31_Forma_Compacta.c
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
if bufexists(fnamemodify("exemplo33_Contagem.c", ":p")) | buffer exemplo33_Contagem.c | else | edit exemplo33_Contagem.c | endif
balt exemplo32_Incr_Decr.c
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
if bufexists(fnamemodify("exemplo35_Tabuada.c", ":p")) | buffer exemplo35_Tabuada.c | else | edit exemplo35_Tabuada.c | endif
balt exemplo33_Contagem.c
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
edit exemplo36_Itoa.c
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
argglobal
if bufexists(fnamemodify("exemplo36_Itoa.c", ":p")) | buffer exemplo36_Itoa.c | else | edit exemplo36_Itoa.c | endif
balt exemplo35_Tabuada.c
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
if bufexists(fnamemodify("exemplo38_Digitos.c", ":p")) | buffer exemplo38_Digitos.c | else | edit exemplo38_Digitos.c | endif
balt exemplo36_Itoa.c
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
if bufexists(fnamemodify("exemplo310_Break.c", ":p")) | buffer exemplo310_Break.c | else | edit exemplo310_Break.c | endif
balt exemplo38_Digitos.c
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
