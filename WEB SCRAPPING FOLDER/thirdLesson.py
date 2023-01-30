from secondLesson import bsObj
try:
    badContent = bsObj.NonExistingTag.anotherTag
except AttributeError as e:
    print("Tag was not found")
else:
    if (badContent == None):
        print("Bad content is not found")
    else:
        print(badContent)
