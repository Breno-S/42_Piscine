#!/bin/sh
git status -s --ignored --untracked-files=all | grep '!!' | sed 's/!! //g'
