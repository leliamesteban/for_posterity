#!/usr/bin/env python
from __future__ import print_function
import itertools, sys
from random import randint
# ab and ba the same in itertools.combinations
# at the moment uses only one core

def usage():
    print 

alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def first_letters(num_letters):
    order = 'first'
    array = []
    i = 0
    while i < num_letters:
        array += alphabet[i]
        i += 1
    perms(array)

def random_letters(num_letters):
    order = 'random'
    array = []
    top = 5 # or num_letters or 26
    print (randint(0, top))
    i = 0
    alph = alphabet
    while i < num_letters:
        random = randint(0, num_letters)
        array += alph[random]
        # and remove from alph
        i += 1
        print(array)

def perms(array):
    count = 0
    print("Calculating permutations of", num_letters, "...")
    # for all lengths of the "word"
    for L in range(1, num_letters+1):
        for subset in itertools.permutations(array, L):
            # combinations += subset with delimiters
            # print the "word"
            # print(subset, file=f)
            # print(subset)
            # add subset as new line to permutations.file
            count += 1
    print (count)

# calculate just the output with num_letters! (factorial)
def factorial(num_letters):
    while i < num_letters:
        total = num_letters * num_letters-1

#print perms(array), "permutations of the first", num_letters, order, 'order'
num_letters = 16 # sys.argv[1:] unless empty
first_letters(num_letters)
#random_letters(num_letters)

# pretty print words from array

# optimize

# see /usr/share/dict/words

# from itertools import chain, combinations
# def all_subsets(ss):
#     return chain(*map(lambda x: combinations(ss, x), range(0, len(ss)+1)))
# 
# for subset in all_subsets(stuff):
#     print(subset)

# not mine, pretty print big numbers

# "{:,}".format(value)
