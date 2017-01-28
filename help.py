def usage():
    print(""" Usage: thingy [OPTIONS]
           -h                        Display this usage message
           -H hostname               Hostname to connect to
""")

# virtualenv venv && source venv/bin/activate # later deactivate
array = ['stuff', 'other stuff', 'some', 'more']
# '' for strings, don't quote for numbers
# {} for 2d array. Type:name
def iterate():
    for a in array[:]:
        print ("Some Stuff", a)

def initlog(*args):
    pass   # does nothing

#def concat(*args, sep="/"):
#    return sep.join(args)

#concat("some", "words", "to", "concat", sep=".")

def ask_ok(prompt, retries=4, reminder='Please try again!'):
    while True:
        ok = input(prompt)
        if ok in ('y', 'ye', 'yes'):
            return True
        if ok in ('n', 'no', 'nop', 'nope'):
            return False
        retries = retries - 1
        if retries < 0:
            raise ValueError('invalid user response')
        print(reminder)

def documentation():
    """ This is the documentation
    call it with
    print(documentation.__doc__)
    """
    pass

from optparser import OptionParser
parser = OptionParser()
parser.add_option("-q", "--quiet",
                  action="store_false", dest="verbose", default=True,
                  help="don't print status messages to stdout")
parser.add_option("-a", "--artist", dest="filename",
                  help="Artist", metavar="FILE")
parser.add_option("-A", "--album", dest="filename",
                  help="Album", metavar="FILE")

(options, args) = parser.parse_args()


def links():
    """
+   [Language Reference](https://docs.python.org/3/reference/index.html#reference-index)
+   [Table of Contents](https://docs.python.org/3/tutorial/index.html)
+   [PIPEs in subprocess module](http://kendriu.com/how-to-use-pipes-in-python-subprocesspopen-objects)
"""

# modulo
# a % b = c
# a - n*b = c
# a % b = a - b * floor(a/b)
# http://codereview.stackexchange.com/questions/57923/index-into-array-as-if-it-is-circular
