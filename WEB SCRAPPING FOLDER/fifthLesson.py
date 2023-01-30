from urllib.request import urlopen
from urllib.error import*
from bs4 import BeautifulSoup

html = urlopen("http://pythonscraping.com/pages/warandpeace.html")
bs4Object = BeautifulSoup(html.read(), "html.parser")
nameList = bs4Object.findAll("span", {"class": {"red", "green"}})
for name in nameList:
    print(name.get_text())
