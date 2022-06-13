# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 11:51:17 by jbrown            #+#    #+#              #
#    Updated: 2022/06/13 15:07:00 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MESSAGE = echo "Generating exam question."

all:
	@$(MESSAGE)
	@cd test && bash level.sh

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
