run: 
	gcc text-reader.c -o execute
	./execute

cm: rm
	git add -A
	git commit -m "auto-commit"
	git push

rm: rm execute
