#!/bin/bash
cd "$(git rev-parse --show-toplevel)" || exit 1
git ls-files --ignored --exclude-standard --others -- ~/shell00
