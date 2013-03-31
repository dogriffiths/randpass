#!/bin/bash

testPasswordChanges()
{
  export P1=$(../src/randpass)
  export P2=$(../src/randpass)
  assertNotEquals "Two calls product same password: '$P1'" "$P1" "$P2"
}

testPasswordChangesWhenUsingRandLib()
{
  export P1=$(../src/randpass -r)
  export P2=$(../src/randpass -r)
  assertNotEquals "Two calls product same password: '$P1'" "$P1" "$P2"
}

# load shunit2
. shunit2
