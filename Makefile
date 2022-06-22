# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 11:51:17 by jbrown            #+#    #+#              #
#    Updated: 2022/06/18 17:52:03 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXAM = exam_shell

COMPARE = compare

GNL = gnl/get_next_line_bonus.c gnl/get_next_line_utils_bonus.c -Ignl -D BUFFER_SIZE=42

CC = gcc

FLAGS = -Wall -Wextra -Werror

all:
	@cp -R -u -p rendu/ archive/
#	@rm -rf rendu/*
	@rm -Rf subject/*
	@cd test && $(CC) $(FLAGS) exam_shell.c -lreadline -o $(EXAM)
	@cd test && ./$(EXAM)

comparecompile:
	$(CC) $(FLAGS) compare.c $(GNL) -o $(COMPARE)

testcompile:
	$(CC) $(FLAGS) test/text.c -o test

test:
	test/test | test/compare

grademe:
	@cd test && bash grademe.sh

re:
	@cp -R -u -p rendu/ archive/
	@rm -rf rendu/*
	@rm -Rf subject/*
	@make all  --no-print-directory

.PHONY: all test re
