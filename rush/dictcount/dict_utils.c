int	get_dict_len(Dict *dict)
{
	int	i

	i = 0;
	while (dict[i].values != NULL)
	{
		i++;
	}
	return (i);
}

char	*find_in_dict(Dict *dict, char *n)
{
	int	i;

	i = 0;
	while (i < get_dict_len(dict))
	{
		if (strcmp(n, dict[i].key) == 0)
			return (dict[i].values);
		i++;
	}
	return ('\0');
}