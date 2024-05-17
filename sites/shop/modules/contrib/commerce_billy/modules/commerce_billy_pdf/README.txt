Commerce Billy PDF
******************
Enables PDF donwload of invoiced and canceled orders.

Installation DOMPDF
*******************

1. Download dompdf with Composer

  composer require dompdf/dompdf

  Make sure that Composer's autoload file is included somewhere (for example
  with Composer manager).

2. Add dompdf fonts to public dir:

dompdf needs write access to its font directory.
Copy "dompdf/lib/fonts" to your public files directory:
  public://fonts (example: sites/default/files/fonts)

To check if everything is at the right place, you should find
  public://fonts/Courier.afm (for example at
  sites/default/files/fonts/Courier.afm).

Installation WKHTMLTOPDF
***********************
As alternative PDF converater WKHTMLTOPDF can be used:

1. Set variable 'commerce_billy_pdf_converter' to 'wkhtmltopdf'

2. Install WOKHTMLTOPDF - PHP Wrapper
libraries[phpwkhtmltopdf][download][type] = "get"
libraries[phpwkhtmltopdf][download][url] = "https://github.com/mikehaertl/phpwkhtmltopdf/archive/2.0.1.tar.gz"
libraries[phpwkhtmltopdf][directory_name] = "phpwkhtmltopdf"
libraries[phpwkhtmltopdf][destination] = "libraries"

Administration
**************
Got to: Store > Configuration > Billy invoice settings > PDF settings
        (/admin/commerce/config/billy-invoice/pdf)


Troubles
********
- Invoice links returns "Error generating PDF invoice. Please contact the
  website administrator." :
    Check your watchdog which contains information about the exception. Usually
    fonts are not correctly installed.

Credits
*******
Matthias Hutterer (mh86)
Klaus Purer (klausi)
