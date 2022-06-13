#include <stdlib.h>
#include <stdio.h>

void    print_args(char **argv);

char    **tests(int i)
{
    int     j;
    char    **ret;
    char    *test_list[30][30] =
    {
        {"a.out", "1", "2", "3", "5", "7",  "24", NULL},
        {"a.out", "Kjq", NULL},
        {"a.out", "HFtK7", NULL},
        {"a.out", "A7LptZEb6M sfzyOrBVl5GT9YWk1 wgB Ypl U41xk7DKwepL x42SuPNqvVkmfp0 xj6eVsOaU3DAYNPLn 3QKy1b vLQlUGue7m V8DFO7 7MTXogiuEI", NULL},
        {"a.out", "zfxwVrCp82 YaN EwM8r2pRony Zp0OgI43AtVqLHSGx 6AOC3K yuT7skXef3MWwp nbAR5LHt vM9 Mfs1kHwh0 zPLXnZ4JqMV 5hLejBH8Sx1Gs0N WSLZmtkH7I8DPlaO 2cUvPe GfjhMC jviT1YCfkKJswzt8l NzwCM0VK2p tN2dQPLsBfevFzZg uQnPmSDwqYcO", NULL},
        {"a.out", "9nv8QbDKp", "3cUw", "RMj", "DTP", "K3S", "RDFSdCAp0BU", "4uG1rZFc27sYV", "4ah2m6BS", "LBOzePYp34I0", "AnPUW0YtE6mODbc", "Pb5YzMByAH7u", "adRCPeruU", NULL},
        {"a.out", "3PrbT7jStAN o4yObEdnArJR7 kQ4bC7GfzmoJlM 1rSg4ucTa7 g6rf5u4q kAsCBp25NOn b2ZdchNECgMf6 U8zf2pqDxsdcrl EW9HniAu C7QZbycrJpo2DWkLw yFikHngZb1K8fsGl 4ZTg89UWB vlNKzpTfG XHljao AZeEkY2GDVqhCoK", "ghm6nCjyAebJ8D Ty1MiKmNRW i4rtQAaUlzG9vJsw zR0Ukha6pyr9Owj8n bAQ9LhcyKsZvSge06 7CKoOBDQXGp4yaxt5 4IfPiEgSB DVpGEm4XZ5 tpWbH43QOK2C VxPWNt5mXTYISzl EabBQz A36b7IXm9Ly NMFVUZ5HcmwYfP1hb LM2v1sNctje4gwiGk DRPG6tfgxK mLDTkZfN 6GPsniXDvT BPAgt", "sNVLr1bm 1TgNU3LXv7V6P9mQ qMH0PO XbJKNkpSxwh WRtkMIzG9ueq7iSj LTaHCMYuA NKUkfrP psdOFfZh52S6AkWQ Wp9S0Ce6VZqGMNjk mQ1XKNwpW2H8Fu N8ZsRa U2DPLnjaFJ30dvpS6", "AOWVoyet5k0hU8NSE 4JOI SN4pQxvakPioIZ6 vdH6znSoNe9 FSdfL4RUTHy0 FV4Aqlt0wgT JOX6c5N LIACfUaz3lWRcP D80uM", "gfxyvWZQt2 zWxredl 6fxF C3UAV6MW4bt8vDsK rQCTMjUlxoafRd7 v0z BaD6ufNTntv QaICuK7 zstu39QFkD2q cLpsVDvUS zheRXNrFc fwP29HBCg3MLamD vmhbcQnfReoKOqW Qq2kSI0s8 OZPrcWlhj7oS ieJIlr3", "YLWqt05BecPCa k69h4tTyXHxg pzHbrOciA0GVWkNn zgUISe8ixPNXh7B vBarnkh1 NnQjqr2lTR RtXJIcuzN c7rYXCUTOsQvo yLSJsQ07OMhb9Gc furUmR4w3D zfA ySWB05cEmiU tFLkuUf1z9HCX fVClI6YRzoMHEm Nvj 6fk Ilc5kWZU2jAuyaxd 09VrTtMagWhCF", "sFQLxP9hNmRj akW 0OgImPT mosbYxaeVQXrihGZW BCYj94xWp k6uUHyCgIwP", "X4mVOfIaw ObEPcgXLm VBj8Cf0eW7xMhGila gLX3fxe1tmlFwICnB khX4U70djiAHv3 F82WCfAGluP9gm73V oOMV0B DfbOhAjMZRiLqGg 5AcIvupSHoNLPKj 4fcMyhwisn5zVtK pLMCiW9YQdB01y rsfb O16b7yv2", "3OGc nrEtI v6b39F8DCMmaK v7wo 1Rt3umw7Av hF8N Jnp0uqrmFRP5iNA FZkSaeXrEi8gPA 2GMB4s3 9Wu2U78I0xefbR", "iCEF MqTgQx7K2mF4 rWLJkUt48K BprCnKlGwx9ijXf A7sML9CxN CSXy mJiNuWQo7PHX 2s9og3rlqy g6CkG5xsrVKoE AwvkUx znuOZwv1JHt0CoW 0VMX RUx7gD w0IO1qS2Wr8hFfYT3", "1BF7sVgXTz6POWM qlbZo7ILX Vj7sYrdOA0 c12S fYvIOHP ruRDBMLK3xE BRZ Ps7E4kASUFa2vi K8u9stql2yjFXYiHW 3fDB DeJaXAsdpT r9Pe 8pmMgtdH1GDab jubDLAo", "E65X DHt KxXO2sTB8wtRS WUtBEQ2ar MsrKJ83S5PY7ef rq35xfvDPZ F0vEYwl9uIoSJmz3R 0cCz6NY9mf wROtCu18nPkxA 2fZVn8sk3NdQB6 kNEMH0XidwhUcY gbBwJD18TALj mg0En1", "2yGVA56f8 oxdbTnaf qBIwRGX1Llh5 PuvHpFrYa5LNh jWOA8r3 2fpC3d9EWs gHR23zmapuKC7Gwl5 JONu 0zvUcLRPJnEb9wSpW CmGFInNJeX9yxit ZhgeGk3xXv0W Cp1aWu5tfNxcBF2", "dgP5ZLR JS9HxTzG tSnPQANLrxhf1T 8uqzIVn7XJMZ R9sB0 fira5msx Mc8OXYBqljtIi m5lsNVPf JM8baHwV", "eLwIKFtdNjhTD JN9PSTuD8KFH6t VwmHNrZJYUpPcun 3IQkK6BDjPNOgbt45 wMDKUaAHruWn StCbXHE1w Vv8sztMdnr JInhtcDs9R5dx2Ow Eb75dmQLfiPF ev3SDuFJsw VchtTIb2F r4JjFbfzvTwdlS X5BLuAJk7F6vDxp K1ZVIuH9pYe2jDy", "R3pF7O TsVc8Z73 AZkb q6IzrFUmKNW7LbPnf IMlHLWJEtA xhk8vzN ANEU QbhEkPRC ZNCKrEBpthQIY5b Fq1jv30uYX lfzjGMOVSZxTykQi UVGAbD1tskXLMRw Dk7E LHoKRlV kSpVwXTB afdxG4MP1m FtyenfD0c RWMgkBOV19", NULL},
        {"a.out", NULL},
        {NULL},
    };
    ret = malloc(sizeof(test_list[i]));
    j = 0;
    while (test_list[i][j])
    {
        ret[j] = malloc(sizeof(test_list[i][j]));
        j++;
    }
	ret = test_list[i];
    return (ret);
}
