let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Learning/NumberOne
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
tabnew
tabnew
tabnew
tabnew
tabnew
tabrewind
edit 00-1gcc_compiled.c
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
balt 07-1CharacterCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/00-2array_test.c") | buffer ~/C_Learning/NumberOne/00-2array_test.c | else | edit ~/C_Learning/NumberOne/00-2array_test.c | endif
balt ~/C_Learning/NumberOne/00-1gcc_compiled.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/01-1HelloWorld.c
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
balt ~/C_Learning/NumberOne/00-1gcc_compiled.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/01-2HelloWorld.c") | buffer ~/C_Learning/NumberOne/01-2HelloWorld.c | else | edit ~/C_Learning/NumberOne/01-2HelloWorld.c | endif
balt ~/C_Learning/NumberOne/01-1HelloWorld.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/02-1FahrCelsius.c
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
argglobal
balt ~/C_Learning/NumberOne/01-1HelloWorld.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/02-2FahrCelsius.c") | buffer ~/C_Learning/NumberOne/02-2FahrCelsius.c | else | edit ~/C_Learning/NumberOne/02-2FahrCelsius.c | endif
balt ~/C_Learning/NumberOne/02-1FahrCelsius.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/02-3FarhCelsius.c") | buffer ~/C_Learning/NumberOne/02-3FarhCelsius.c | else | edit ~/C_Learning/NumberOne/02-3FarhCelsius.c | endif
balt ~/C_Learning/NumberOne/02-1FahrCelsius.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
4
normal! zo
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/03-1HeaderFahrCelsius.c
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
argglobal
balt ~/C_Learning/NumberOne/03-3Constants.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/03-2InverseHeaderFahrCelsius.c") | buffer ~/C_Learning/NumberOne/03-2InverseHeaderFahrCelsius.c | else | edit ~/C_Learning/NumberOne/03-2InverseHeaderFahrCelsius.c | endif
balt ~/C_Learning/NumberOne/03-3Constants.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/03-3Constants.c") | buffer ~/C_Learning/NumberOne/03-3Constants.c | else | edit ~/C_Learning/NumberOne/03-3Constants.c | endif
balt ~/C_Learning/NumberOne/03-2InverseHeaderFahrCelsius.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/04-1GetcharPutchar.c
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
balt ~/C_Learning/NumberOne/04-2GetcharPutchar.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/04-2GetcharPutchar.c") | buffer ~/C_Learning/NumberOne/04-2GetcharPutchar.c | else | edit ~/C_Learning/NumberOne/04-2GetcharPutchar.c | endif
balt ~/C_Learning/NumberOne/04-1GetcharPutchar.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/05-1CharCount.c
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
balt ~/C_Learning/NumberOne/05-2CharCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/05-2CharCount.c") | buffer ~/C_Learning/NumberOne/05-2CharCount.c | else | edit ~/C_Learning/NumberOne/05-2CharCount.c | endif
balt ~/C_Learning/NumberOne/05-1CharCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/06-1LineCount.c
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
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
argglobal
balt ~/C_Learning/NumberOne/06-2LineTabSpace.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/06-2LineTabSpace.c") | buffer ~/C_Learning/NumberOne/06-2LineTabSpace.c | else | edit ~/C_Learning/NumberOne/06-2LineTabSpace.c | endif
balt ~/C_Learning/NumberOne/06-3ManageIOstream.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/06-3ManageIOstream.c") | buffer ~/C_Learning/NumberOne/06-3ManageIOstream.c | else | edit ~/C_Learning/NumberOne/06-3ManageIOstream.c | endif
balt ~/C_Learning/NumberOne/06-2LineTabSpace.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 5) / 11)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe '2resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
exe '3resize ' . ((&lines * 11 + 13) / 26)
exe 'vert 3resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/07-1CharacterCount.c
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
balt ~/C_Learning/NumberOne/07-2Exercise.c
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
15
normal! zo
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/07-2Exercise.c") | buffer ~/C_Learning/NumberOne/07-2Exercise.c | else | edit ~/C_Learning/NumberOne/07-2Exercise.c | endif
balt ~/C_Learning/NumberOne/07-1CharacterCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/08-1ArrayCharCount.c
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
balt ~/C_Learning/NumberOne/08-2CharInWordCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/08-2CharInWordCount.c") | buffer ~/C_Learning/NumberOne/08-2CharInWordCount.c | else | edit ~/C_Learning/NumberOne/08-2CharInWordCount.c | endif
balt ~/C_Learning/NumberOne/08-1ArrayCharCount.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext
edit ~/C_Learning/NumberOne/09-1PowerFunction.c
argglobal
balt ~/C_Learning/NumberOne/08-1ArrayCharCount.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
6
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Learning/NumberOne
tabnext
edit ~/C_Learning/NumberOne/10-1BiggestLine.c
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
balt ~/C_Learning/NumberOne/10-2Scopes.c
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
lcd ~/C_Learning/NumberOne
wincmd w
argglobal
if bufexists("~/C_Learning/NumberOne/10-2Scopes.c") | buffer ~/C_Learning/NumberOne/10-2Scopes.c | else | edit ~/C_Learning/NumberOne/10-2Scopes.c | endif
balt ~/C_Learning/NumberOne/10-1BiggestLine.c
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
lcd ~/C_Learning/NumberOne
wincmd w
exe 'vert 1resize ' . ((&columns * 53 + 53) / 106)
exe 'vert 2resize ' . ((&columns * 52 + 53) / 106)
tabnext 1
set stal=1
badd +1 ~/C_Learning/NumberOne/00-1gcc_compiled.c
badd +4 ~/C_Learning/NumberOne/01-1HelloWorld.c
badd +1 ~/C_Learning/NumberOne/02-1FahrCelsius.c
badd +1 ~/C_Learning/NumberOne/03-1HeaderFahrCelsius.c
badd +1 ~/C_Learning/NumberOne/04-1GetcharPutchar.c
badd +1 ~/C_Learning/NumberOne/05-1CharCount.c
badd +1 ~/C_Learning/NumberOne/07-1CharacterCount.c
badd +1 ~/C_Learning/NumberOne/08-1ArrayCharCount.c
badd +1 ~/C_Learning/NumberOne/09-1PowerFunction.c
badd +1 ~/C_Learning/NumberOne/10-1BiggestLine.c
badd +1 ~/C_Learning/NumberOne/06-1LineCount.c
badd +1 ~/C_Learning/NumberOne/00-2array_test.c
badd +1 ~/C_Learning/NumberOne/01-2HelloWorld.c
badd +1 ~/C_Learning/NumberOne/02-2FahrCelsius.c
badd +1 ~/C_Learning/NumberOne/02-3FarhCelsius.c
badd +1 ~/C_Learning/NumberOne/03-3Constants.c
badd +1 ~/C_Learning/NumberOne/03-2InverseHeaderFahrCelsius.c
badd +1 ~/C_Learning/NumberOne/04-2GetcharPutchar.c
badd +1 ~/C_Learning/NumberOne/05-2CharCount.c
badd +1 ~/C_Learning/NumberOne/06-2LineTabSpace.c
badd +1 ~/C_Learning/NumberOne/06-3ManageIOstream.c
badd +1 ~/C_Learning/NumberOne/07-2Exercise.c
badd +1 ~/C_Learning/NumberOne/08-2CharInWordCount.c
badd +1 ~/C_Learning/NumberOne/10-2Scopes.c
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
