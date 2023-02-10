files := file1 file2

somefile: $(files)
	echo "look at this variable" file1 file2
	touch somefile

file1:
	touch file1

file2:
	touch file2

clean:
	rm -f $(files) somefile
