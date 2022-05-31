#if __WORDSIZE == 64
#define JIT_INSTR_MAX 116
    0,	/* data */
    0,	/* live */
    4,	/* align */
    0,	/* save */
    0,	/* load */
    4,	/* skip */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    112,	/* prolog */
    0,	/* ellipsis */
    0,	/* va_push */
    0,	/* allocai */
    0,	/* allocar */
    0,	/* arg_c */
    0,	/* arg_s */
    0,	/* arg_i */
    0,	/* arg_l */
    0,	/* getarg_c */
    0,	/* getarg_uc */
    0,	/* getarg_s */
    0,	/* getarg_us */
    0,	/* getarg_i */
    0,	/* getarg_ui */
    0,	/* getarg_l */
    0,	/* putargr_c */
    0,	/* putargi_c */
    0,	/* putargr_uc */
    0,	/* putargi_uc */
    0,	/* putargr_s */
    0,	/* putargi_s */
    0,	/* putargr_us */
    0,	/* putargi_us */
    0,	/* putargr_i */
    0,	/* putargi_i */
    0,	/* putargr_ui */
    0,	/* putargi_ui */
    0,	/* putargr_l */
    0,	/* putargi_l */
    4,	/* va_start */
    8,	/* va_arg */
    8,	/* va_arg_d */
    0,	/* va_end */
    4,	/* addr */
    16,	/* addi */
    12,	/* addcr */
    24,	/* addci */
    28,	/* addxr */
    28,	/* addxi */
    4,	/* subr */
    16,	/* subi */
    12,	/* subcr */
    24,	/* subci */
    28,	/* subxr */
    28,	/* subxi */
    20,	/* rsbi */
    4,	/* mulr */
    16,	/* muli */
    12,	/* qmulr */
    20,	/* qmuli */
    12,	/* qmulr_u */
    20,	/* qmuli_u */
    4,	/* divr */
    16,	/* divi */
    4,	/* divr_u */
    16,	/* divi_u */
    20,	/* qdivr */
    16,	/* qdivi */
    20,	/* qdivr_u */
    16,	/* qdivi_u */
    4,	/* remr */
    16,	/* remi */
    4,	/* remr_u */
    16,	/* remi_u */
    4,	/* andr */
    16,	/* andi */
    4,	/* orr */
    16,	/* ori */
    4,	/* xorr */
    16,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    4,	/* ltr */
    4,	/* lti */
    4,	/* ltr_u */
    4,	/* lti_u */
    8,	/* ler */
    12,	/* lei */
    8,	/* ler_u */
    12,	/* lei_u */
    12,	/* eqr */
    12,	/* eqi */
    8,	/* ger */
    12,	/* gei */
    8,	/* ger_u */
    12,	/* gei_u */
    4,	/* gtr */
    8,	/* gti */
    4,	/* gtr_u */
    8,	/* gti_u */
    8,	/* ner */
    8,	/* nei */
    4,	/* movr */
    12,	/* movi */
    12,	/* movnr */
    12,	/* movzr */
    28,	/* casr */
    40,	/* casi */
    8,	/* extr_c */
    4,	/* extr_uc */
    8,	/* extr_s */
    8,	/* extr_us */
    4,	/* extr_i */
    8,	/* extr_ui */
    20,	/* bswapr_us */
    52,	/* bswapr_ui */
    116,	/* bswapr_ul */
    20,	/* htonr_us */
    52,	/* htonr_ui */
    116,	/* htonr_ul */
    4,	/* ldr_c */
    16,	/* ldi_c */
    4,	/* ldr_uc */
    16,	/* ldi_uc */
    4,	/* ldr_s */
    16,	/* ldi_s */
    4,	/* ldr_us */
    16,	/* ldi_us */
    4,	/* ldr_i */
    16,	/* ldi_i */
    4,	/* ldr_ui */
    16,	/* ldi_ui */
    4,	/* ldr_l */
    16,	/* ldi_l */
    8,	/* ldxr_c */
    16,	/* ldxi_c */
    8,	/* ldxr_uc */
    16,	/* ldxi_uc */
    8,	/* ldxr_s */
    16,	/* ldxi_s */
    8,	/* ldxr_us */
    16,	/* ldxi_us */
    8,	/* ldxr_i */
    16,	/* ldxi_i */
    8,	/* ldxr_ui */
    16,	/* ldxi_ui */
    8,	/* ldxr_l */
    16,	/* ldxi_l */
    4,	/* str_c */
    16,	/* sti_c */
    4,	/* str_s */
    16,	/* sti_s */
    4,	/* str_i */
    16,	/* sti_i */
    4,	/* str_l */
    16,	/* sti_l */
    8,	/* stxr_c */
    16,	/* stxi_c */
    8,	/* stxr_s */
    16,	/* stxi_s */
    8,	/* stxr_i */
    16,	/* stxi_i */
    8,	/* stxr_l */
    16,	/* stxi_l */
    4,	/* bltr */
    8,	/* blti */
    4,	/* bltr_u */
    8,	/* blti_u */
    4,	/* bler */
    8,	/* blei */
    4,	/* bler_u */
    8,	/* blei_u */
    4,	/* beqr */
    16,	/* beqi */
    4,	/* bger */
    8,	/* bgei */
    4,	/* bger_u */
    8,	/* bgei_u */
    4,	/* bgtr */
    8,	/* bgti */
    4,	/* bgtr_u */
    8,	/* bgti_u */
    4,	/* bner */
    16,	/* bnei */
    8,	/* bmsr */
    12,	/* bmsi */
    8,	/* bmcr */
    12,	/* bmci */
    32,	/* boaddr */
    36,	/* boaddi */
    16,	/* boaddr_u */
    20,	/* boaddi_u */
    32,	/* bxaddr */
    36,	/* bxaddi */
    16,	/* bxaddr_u */
    20,	/* bxaddi_u */
    32,	/* bosubr */
    36,	/* bosubi */
    16,	/* bosubr_u */
    20,	/* bosubi_u */
    32,	/* bxsubr */
    36,	/* bxsubi */
    16,	/* bxsubr_u */
    20,	/* bxsubi_u */
    4,	/* jmpr */
    4,	/* jmpi */
    4,	/* callr */
    16,	/* calli */
    0,	/* prepare */
    0,	/* pushargr_c */
    0,	/* pushargi_c */
    0,	/* pushargr_uc */
    0,	/* pushargi_uc */
    0,	/* pushargr_s */
    0,	/* pushargi_s */
    0,	/* pushargr_us */
    0,	/* pushargi_us */
    0,	/* pushargr_i */
    0,	/* pushargi_i */
    0,	/* pushargr_ui */
    0,	/* pushargi_ui */
    0,	/* pushargr_l */
    0,	/* pushargi_l */
    0,	/* finishr */
    0,	/* finishi */
    0,	/* ret */
    0,	/* retr_c */
    0,	/* reti_c */
    0,	/* retr_uc */
    0,	/* reti_uc */
    0,	/* retr_s */
    0,	/* reti_s */
    0,	/* retr_us */
    0,	/* reti_us */
    0,	/* retr_i */
    0,	/* reti_i */
    0,	/* retr_ui */
    0,	/* reti_ui */
    0,	/* retr_l */
    0,	/* reti_l */
    0,	/* retval_c */
    0,	/* retval_uc */
    0,	/* retval_s */
    0,	/* retval_us */
    0,	/* retval_i */
    0,	/* retval_ui */
    0,	/* retval_l */
    112,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    4,	/* addr_f */
    12,	/* addi_f */
    4,	/* subr_f */
    12,	/* subi_f */
    12,	/* rsbi_f */
    4,	/* mulr_f */
    12,	/* muli_f */
    4,	/* divr_f */
    12,	/* divi_f */
    4,	/* negr_f */
    4,	/* absr_f */
    4,	/* sqrtr_f */
    4,	/* ltr_f */
    12,	/* lti_f */
    4,	/* ler_f */
    12,	/* lei_f */
    4,	/* eqr_f */
    12,	/* eqi_f */
    4,	/* ger_f */
    12,	/* gei_f */
    4,	/* gtr_f */
    12,	/* gti_f */
    8,	/* ner_f */
    16,	/* nei_f */
    28,	/* unltr_f */
    36,	/* unlti_f */
    28,	/* unler_f */
    36,	/* unlei_f */
    28,	/* uneqr_f */
    36,	/* uneqi_f */
    28,	/* unger_f */
    36,	/* ungei_f */
    28,	/* ungtr_f */
    36,	/* ungti_f */
    40,	/* ltgtr_f */
    48,	/* ltgti_f */
    28,	/* ordr_f */
    36,	/* ordi_f */
    20,	/* unordr_f */
    28,	/* unordi_f */
    4,	/* truncr_f_i */
    4,	/* truncr_f_l */
    4,	/* extr_f */
    4,	/* extr_d_f */
    4,	/* movr_f */
    8,	/* movi_f */
    4,	/* ldr_f */
    16,	/* ldi_f */
    8,	/* ldxr_f */
    16,	/* ldxi_f */
    4,	/* str_f */
    16,	/* sti_f */
    8,	/* stxr_f */
    16,	/* stxi_f */
    8,	/* bltr_f */
    16,	/* blti_f */
    8,	/* bler_f */
    16,	/* blei_f */
    8,	/* beqr_f */
    16,	/* beqi_f */
    8,	/* bger_f */
    16,	/* bgei_f */
    8,	/* bgtr_f */
    16,	/* bgti_f */
    8,	/* bner_f */
    16,	/* bnei_f */
    32,	/* bunltr_f */
    40,	/* bunlti_f */
    32,	/* bunler_f */
    40,	/* bunlei_f */
    32,	/* buneqr_f */
    40,	/* buneqi_f */
    32,	/* bunger_f */
    40,	/* bungei_f */
    32,	/* bungtr_f */
    40,	/* bungti_f */
    44,	/* bltgtr_f */
    52,	/* bltgti_f */
    32,	/* bordr_f */
    40,	/* bordi_f */
    24,	/* bunordr_f */
    32,	/* bunordi_f */
    0,	/* pushargr_f */
    0,	/* pushargi_f */
    0,	/* retr_f */
    0,	/* reti_f */
    0,	/* retval_f */
    0,	/* arg_d */
    0,	/* getarg_d */
    0,	/* putargr_d */
    0,	/* putargi_d */
    4,	/* addr_d */
    20,	/* addi_d */
    4,	/* subr_d */
    20,	/* subi_d */
    20,	/* rsbi_d */
    4,	/* mulr_d */
    20,	/* muli_d */
    4,	/* divr_d */
    20,	/* divi_d */
    4,	/* negr_d */
    4,	/* absr_d */
    4,	/* sqrtr_d */
    4,	/* ltr_d */
    20,	/* lti_d */
    4,	/* ler_d */
    20,	/* lei_d */
    4,	/* eqr_d */
    20,	/* eqi_d */
    4,	/* ger_d */
    20,	/* gei_d */
    4,	/* gtr_d */
    20,	/* gti_d */
    8,	/* ner_d */
    24,	/* nei_d */
    28,	/* unltr_d */
    44,	/* unlti_d */
    28,	/* unler_d */
    44,	/* unlei_d */
    28,	/* uneqr_d */
    44,	/* uneqi_d */
    28,	/* unger_d */
    44,	/* ungei_d */
    28,	/* ungtr_d */
    44,	/* ungti_d */
    40,	/* ltgtr_d */
    56,	/* ltgti_d */
    28,	/* ordr_d */
    44,	/* ordi_d */
    20,	/* unordr_d */
    36,	/* unordi_d */
    4,	/* truncr_d_i */
    4,	/* truncr_d_l */
    4,	/* extr_d */
    4,	/* extr_f_d */
    4,	/* movr_d */
    16,	/* movi_d */
    4,	/* ldr_d */
    16,	/* ldi_d */
    8,	/* ldxr_d */
    16,	/* ldxi_d */
    4,	/* str_d */
    16,	/* sti_d */
    8,	/* stxr_d */
    16,	/* stxi_d */
    8,	/* bltr_d */
    24,	/* blti_d */
    8,	/* bler_d */
    24,	/* blei_d */
    8,	/* beqr_d */
    24,	/* beqi_d */
    8,	/* bger_d */
    24,	/* bgei_d */
    8,	/* bgtr_d */
    24,	/* bgti_d */
    8,	/* bner_d */
    24,	/* bnei_d */
    32,	/* bunltr_d */
    48,	/* bunlti_d */
    32,	/* bunler_d */
    48,	/* bunlei_d */
    32,	/* buneqr_d */
    48,	/* buneqi_d */
    32,	/* bunger_d */
    48,	/* bungei_d */
    32,	/* bungtr_d */
    48,	/* bungti_d */
    44,	/* bltgtr_d */
    60,	/* bltgti_d */
    32,	/* bordr_d */
    48,	/* bordi_d */
    24,	/* bunordr_d */
    40,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    4,	/* movr_w_f */
    0,	/* movr_ww_d */
    4,	/* movr_w_d */
    0,	/* movr_f_w */
    4,	/* movi_f_w */
    0,	/* movr_d_ww */
    0,	/* movi_d_ww */
    4,	/* movr_d_w */
    12,	/* movi_d_w */
#endif /* __WORDSIZE */
