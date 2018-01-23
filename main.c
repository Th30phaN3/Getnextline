  if (ac > 1)
    fd = open(av[1], O_RDONLY);
  else
    fd = 0;
  while ((s = get_next_line(fd)) != NULL)
    {
      printf("%s\n", s);
      free(s);
    }
}
