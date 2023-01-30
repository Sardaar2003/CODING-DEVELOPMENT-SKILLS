from urllib.request import urlopen
from urllib.error import *

try:
    html = urlopen("http://pythonscraping.com/pages/page1.html")
except HTTPError as e:
    print(e)
except URLError as e:
    print(e)
else:
    print("Working")
