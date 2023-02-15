let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Slago/C_Kern_Ritchie/NumberSeven
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 00-1Histogram.c
badd +1 00-2SystemExample.c
badd +1 01-1StdLibraryAccess.c
badd +1 01-2InOut.c
badd +1 01-3Scanf.c
badd +1 01-4SscanfSprintf.c
badd +1 02-1FilesIntro.c
badd +1 02-2Files.c
badd +1 02-3Stderr_Exit.c
badd +1 02-4InOutPut_Lines.c
badd +1 README.md
badd +1 outputfile
argglobal
%argdel
$argadd 00-1Histogram.c
$argadd 00-2SystemExample.c
$argadd 01-1StdLibraryAccess.c
$argadd 01-2InOut.c
$argadd 01-3Scanf.c
$argadd 01-4SscanfSprintf.c
$argadd 02-1FilesIntro.c
$argadd 02-2Files.c
$argadd 02-3Stderr_Exit.c
$argadd 02-4InOutPut_Lines.c
$argadd README.md
$argadd outputfile
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit 00-1Histogram.c
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
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
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
wincmd w
argglobal
if bufexists(fnamemodify("00-2SystemExample.c", ":p")) | buffer 00-2SystemExample.c | else | edit 00-2SystemExample.c | endif
balt 00-1Histogram.c
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
if bufexists(fnamemodify("01-1StdLibraryAccess.c", ":p")) | buffer 01-1StdLibraryAccess.c | else | edit 01-1StdLibraryAccess.c | endif
balt 00-2SystemExample.c
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
if bufexists(fnamemodify("01-2InOut.c", ":p")) | buffer 01-2InOut.c | else | edit 01-2InOut.c | endif
balt 01-1StdLibraryAccess.c
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
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit 01-3Scanf.c
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
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("01-3Scanf.c", ":p")) | buffer 01-3Scanf.c | else | edit 01-3Scanf.c | endif
balt 01-2InOut.c
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
if bufexists(fnamemodify("01-4SscanfSprintf.c", ":p")) | buffer 01-4SscanfSprintf.c | else | edit 01-4SscanfSprintf.c | endif
balt 01-3Scanf.c
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
if bufexists(fnamemodify("02-1FilesIntro.c", ":p")) | buffer 02-1FilesIntro.c | else | edit 02-1FilesIntro.c | endif
balt 01-4SscanfSprintf.c
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
if bufexists(fnamemodify("02-2Files.c", ":p")) | buffer 02-2Files.c | else | edit 02-2Files.c | endif
balt 02-1FilesIntro.c
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
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
tabnext
edit 02-3Stderr_Exit.c
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
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
exe '3resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 3resize ' . ((&columns * 82 + 83) / 166)
exe '4resize ' . ((&lines * 18 + 19) / 39)
exe 'vert 4resize ' . ((&columns * 83 + 83) / 166)
argglobal
if bufexists(fnamemodify("02-3Stderr_Exit.c", ":p")) | buffer 02-3Stderr_Exit.c | else | edit 02-3Stderr_Exit.c | endif
balt 02-2Files.c
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
if bufexists(fnamemodify("02-4InOutPut_Lines.c", ":p")) | buffer 02-4InOutPut_Lines.c | else | edit 02-4InOutPut_Lines.c | endif
balt 02-3Stderr_Exit.c
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
if bufexists(fnamemodify("README.md", ":p")) | buffer README.md | else | edit README.md | endif
balt 02-4InOutPut_Lines.c
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
if bufexists(fnamemodify("outputfile", ":p")) | buffer outputfile | else | edit outputfile | endif
balt README.md
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
normal! 010|
wincmd w
exe '1resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 1resize ' . ((&columns * 82 + 83) / 166)
exe '2resize ' . ((&lines * 17 + 19) / 39)
exe 'vert 2resize ' . ((&columns * 83 + 83) / 166)
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
