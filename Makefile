# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 11:51:17 by jbrown            #+#    #+#              #
#    Updated: 2022/06/06 12:21:23 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MESSAGE = echo "Generating exam questions."

all:
	@$(MESSAGE)
	@rm -Rf 01/*
	@rm -Rf 02/*
	@rm -Rf 03/*
	@rm -Rf 04/*
	@bash script.sh

comparecompile:
	gcc compare.c gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o compare

testcompile:
	gcc test/text.c -o test

test:
	test/test | test/compare

grademe:
	@cd test && bash script.sh

.PHONY: all test