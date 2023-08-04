from PyPDF2 import PdfWriter
from pathlib import *

merger = PdfWriter()

check = True
while(check):
    pdfInput = (input("Enter folder direction: ")) #takes dir of pdfs that will merged
    dir_path = Path(pdfInput)

    pdf_files = list(dir_path.glob('*.pdf')) #convert result to a list
    print("pdfs that found:")
    for pdf in pdf_files:
        print(pdf)

    control : chr = input("is it correct (y/n): ")

    check = False if control == 'y' else True

for pdf in pdf_files:   #Merges PDFs
    merger.append(pdf)

#name input for output pdf
name = input("Name for output PDF (if there is already pdf named with same name it'll replaced): ")
merger.write("{}.pdf".format(name)) #writes pdf

print("Program Finished (file created at location where this exe program is)")
merger.close()