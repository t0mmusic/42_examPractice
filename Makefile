# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 11:51:17 by jbrown            #+#    #+#              #
#    Updated: 2022/06/15 20:34:51 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@cp -R -u -p rendu/ archive/
	@rm -rf rendu/*
	@rm -Rf subject/*
	@cd test && gcc exam_shell.c gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o exam_shell
	@cd test && ./exam_shell

comparecompile:
	gcc compare.c gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o compare

testcompile:
	gcc test/text.c -o test

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
