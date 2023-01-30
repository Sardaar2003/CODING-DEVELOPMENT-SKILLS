def stack():
    stackValue = []
    return stackValue


def isEmpty(stackValue):
    return len(stackValue) == 0


def push(stackValue, item):
    stackValue.append(item)
    print("The item has been pushed : ", item)


def pop(stackValue):
    if (isEmpty(stackValue)):
        return "It is an Empty Stack"
    else:
        return stackValue.pop()


stack = stack()
push(stack, str(1))
push(stack, str(2))
push(stack, str(3))
push(stack, str(4))
print("popped item: " + pop(stack))
print("stack after popping an element: " + str(stack))
