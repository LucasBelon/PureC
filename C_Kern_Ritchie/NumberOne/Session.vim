let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/C_Kern_Ritchie/NumberOne
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +2 00-1gcc_compiled.c
badd +1 00-2array_test.c
badd +1 01-1HelloWorld.c
badd +1 01-2HelloWorld.c
badd +1 02-1FahrCelsius.c
badd +7 02-2FahrCelsius.c
badd +1 02-3FarhCelsius.c
badd +1 03-1HeaderFahrCelsius.c
badd +1 03-2InverseHeaderFahrCelsius.c
badd +1 03-3Constants.c
badd +1 04-1GetcharPutchar.c
badd +1 04-2GetcharPutchar.c
badd +1 05-1CharCount.c
badd +1 05-2CharCount.c
badd +1 06-1LineCount.c
badd +1 06-2LineTabSpace.c
badd +1 06-3ManageIOstream.c
badd +1 07-1CharacterCount.c
badd +1 07-2Exercise.c
badd +1 08-1ArrayCharCount.c
badd +1 08-2CharInWordCount.c
badd +1 09-1PowerFunction.c
badd +1 10-1BiggestLine.c
badd +1 10-2Scopes.c
badd +0 README.md
argglobal
%argdel
$argadd 00-1gcc_compiled.c
$argadd 00-2array_test.c
$argadd 01-1HelloWorld.c
$argadd 01-2HelloWorld.c
$argadd 02-1FahrCelsius.c
$argadd 02-2FahrCelsius.c
$argadd 02-3FarhCelsius.c
$argadd 03-1HeaderFahrCelsius.c
$argadd 03-2InverseHeaderFahrCelsius.c
$argadd 03-3Constants.c
$argadd 04-1GetcharPutchar.c
$argadd 04-2GetcharPutchar.c
$argadd 05-1CharCount.c
$argadd 05-2CharCount.c
$argadd 06-1LineCount.c
$argadd 06-2LineTabSpace.c
$argadd 06-3ManageIOstream.c
$argadd 07-1CharacterCount.c
$argadd 07-2Exercise.c
$argadd 08-1ArrayCharCount.c
$argadd 08-2CharInWordCount.c
$argadd 09-1PowerFunction.c
$argadd 10-1BiggestLine.c
$argadd 10-2Scopes.c
$argadd README.md
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit 00-1gcc_compiled.c
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
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
argglobal
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/00-2array_test.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/00-2array_test.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/00-2array_test.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/00-1gcc_compiled.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/01-1HelloWorld.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/01-1HelloWorld.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/01-1HelloWorld.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/00-2array_test.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/01-2HelloWorld.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/01-2HelloWorld.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/01-2HelloWorld.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/01-1HelloWorld.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
tabnext
edit ~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c
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
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c | endif
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/02-2FahrCelsius.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/02-2FahrCelsius.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/02-2FahrCelsius.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/02-3FarhCelsius.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/02-3FarhCelsius.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/02-3FarhCelsius.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/02-2FahrCelsius.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/03-1HeaderFahrCelsius.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/03-1HeaderFahrCelsius.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/03-1HeaderFahrCelsius.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/02-3FarhCelsius.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
tabnext
edit ~/C_Slago/C_Kern_Ritchie/NumberOne/03-2InverseHeaderFahrCelsius.c
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
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/03-2InverseHeaderFahrCelsius.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/03-2InverseHeaderFahrCelsius.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/03-2InverseHeaderFahrCelsius.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/02-1FahrCelsius.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/03-3Constants.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/03-3Constants.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/03-3Constants.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/03-2InverseHeaderFahrCelsius.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/04-1GetcharPutchar.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/04-1GetcharPutchar.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/04-1GetcharPutchar.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/03-3Constants.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/04-2GetcharPutchar.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/04-2GetcharPutchar.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/04-2GetcharPutchar.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/04-1GetcharPutchar.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
exe '1resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 83 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 82 + 83) / 166)
tabnext
edit ~/C_Slago/C_Kern_Ritchie/NumberOne/05-1CharCount.c
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/05-1CharCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/05-1CharCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/05-1CharCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/04-2GetcharPutchar.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/05-2CharCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/05-2CharCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/05-2CharCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/05-1CharCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/06-1LineCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/06-1LineCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/06-1LineCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/05-2CharCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/06-2LineTabSpace.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/06-2LineTabSpace.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/06-2LineTabSpace.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/06-1LineCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit ~/C_Slago/C_Kern_Ritchie/NumberOne/06-3ManageIOstream.c
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/06-3ManageIOstream.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/06-3ManageIOstream.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/06-3ManageIOstream.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/06-2LineTabSpace.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/07-1CharacterCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/07-1CharacterCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/07-1CharacterCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/06-3ManageIOstream.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/07-2Exercise.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/07-2Exercise.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/07-2Exercise.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/07-1CharacterCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/08-1ArrayCharCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/08-1ArrayCharCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/08-1ArrayCharCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/07-2Exercise.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit ~/C_Slago/C_Kern_Ritchie/NumberOne/08-2CharInWordCount.c
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/08-2CharInWordCount.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/08-2CharInWordCount.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/08-2CharInWordCount.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/08-1ArrayCharCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/09-1PowerFunction.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/09-1PowerFunction.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/09-1PowerFunction.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/08-2CharInWordCount.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/10-1BiggestLine.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/10-1BiggestLine.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/10-1BiggestLine.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/09-1PowerFunction.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
argglobal
if bufexists(fnamemodify("~/C_Slago/C_Kern_Ritchie/NumberOne/10-2Scopes.c", ":p")) | buffer ~/C_Slago/C_Kern_Ritchie/NumberOne/10-2Scopes.c | else | edit ~/C_Slago/C_Kern_Ritchie/NumberOne/10-2Scopes.c | endif
balt ~/C_Slago/C_Kern_Ritchie/NumberOne/10-1BiggestLine.c
setlocal fdm=expr
setlocal fde=lsp#ui#vim#folding#foldexpr()
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/C_Slago/C_Kern_Ritchie/NumberOne
wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 83 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 82 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
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
