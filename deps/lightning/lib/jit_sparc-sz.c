#if __WORDSIZE == 32
#define JIT_INSTR_MAX 52
    0,	/* data */
    0,	/* live */
    8,	/* align */
    0,	/* save */
    0,	/* load */
    4,	/* skip */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    36,	/* prolog */
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
    12,	/* addi */
    4,	/* addcr */
    12,	/* addci */
    4,	/* addxr */
    4,	/* addxi */
    4,	/* subr */
    12,	/* subi */
    4,	/* subcr */
    12,	/* subci */
    4,	/* subxr */
    4,	/* subxi */
    16,	/* rsbi */
    4,	/* mulr */
    12,	/* muli */
    8,	/* qmulr */
    16,	/* qmuli */
    8,	/* qmulr_u */
    16,	/* qmuli_u */
    12,	/* divr */
    20,	/* divi */
    8,	/* divr_u */
    16,	/* divi_u */
    28,	/* qdivr */
    24,	/* qdivi */
    24,	/* qdivr_u */
    20,	/* qdivi_u */
    20,	/* remr */
    28,	/* remi */
    16,	/* remr_u */
    24,	/* remi_u */
    4,	/* andr */
    12,	/* andi */
    4,	/* orr */
    12,	/* ori */
    4,	/* xorr */
    12,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    16,	/* ltr */
    16,	/* lti */
    16,	/* ltr_u */
    16,	/* lti_u */
    16,	/* ler */
    16,	/* lei */
    16,	/* ler_u */
    16,	/* lei_u */
    16,	/* eqr */
    16,	/* eqi */
    16,	/* ger */
    16,	/* gei */
    16,	/* ger_u */
    16,	/* gei_u */
    16,	/* gtr */
    16,	/* gti */
    16,	/* gtr_u */
    16,	/* gti_u */
    16,	/* ner */
    16,	/* nei */
    4,	/* movr */
    8,	/* movi */
    16,	/* movnr */
    16,	/* movzr */
    24,	/* casr */
    32,	/* casi */
    8,	/* extr_c */
    4,	/* extr_uc */
    8,	/* extr_s */
    8,	/* extr_us */
    0,	/* extr_i */
    0,	/* extr_ui */
    20,	/* bswapr_us */
    52,	/* bswapr_ui */
    0,	/* bswapr_ul */
    8,	/* htonr_us */
    4,	/* htonr_ui */
    0,	/* htonr_ul */
    4,	/* ldr_c */
    12,	/* ldi_c */
    4,	/* ldr_uc */
    12,	/* ldi_uc */
    4,	/* ldr_s */
    12,	/* ldi_s */
    4,	/* ldr_us */
    12,	/* ldi_us */
    4,	/* ldr_i */
    12,	/* ldi_i */
    0,	/* ldr_ui */
    0,	/* ldi_ui */
    0,	/* ldr_l */
    0,	/* ldi_l */
    4,	/* ldxr_c */
    8,	/* ldxi_c */
    4,	/* ldxr_uc */
    8,	/* ldxi_uc */
    4,	/* ldxr_s */
    8,	/* ldxi_s */
    4,	/* ldxr_us */
    8,	/* ldxi_us */
    4,	/* ldxr_i */
    8,	/* ldxi_i */
    0,	/* ldxr_ui */
    0,	/* ldxi_ui */
    0,	/* ldxr_l */
    0,	/* ldxi_l */
    4,	/* str_c */
    12,	/* sti_c */
    4,	/* str_s */
    12,	/* sti_s */
    4,	/* str_i */
    12,	/* sti_i */
    0,	/* str_l */
    0,	/* sti_l */
    4,	/* stxr_c */
    8,	/* stxi_c */
    4,	/* stxr_s */
    8,	/* stxi_s */
    4,	/* stxr_i */
    8,	/* stxi_i */
    0,	/* stxr_l */
    0,	/* stxi_l */
    12,	/* bltr */
    12,	/* blti */
    12,	/* bltr_u */
    12,	/* blti_u */
    12,	/* bler */
    12,	/* blei */
    12,	/* bler_u */
    12,	/* blei_u */
    12,	/* beqr */
    20,	/* beqi */
    12,	/* bger */
    12,	/* bgei */
    12,	/* bger_u */
    12,	/* bgei_u */
    12,	/* bgtr */
    12,	/* bgti */
    12,	/* bgtr_u */
    12,	/* bgti_u */
    12,	/* bner */
    20,	/* bnei */
    12,	/* bmsr */
    12,	/* bmsi */
    12,	/* bmcr */
    12,	/* bmci */
    12,	/* boaddr */
    12,	/* boaddi */
    12,	/* boaddr_u */
    12,	/* boaddi_u */
    12,	/* bxaddr */
    12,	/* bxaddi */
    12,	/* bxaddr_u */
    12,	/* bxaddi_u */
    12,	/* bosubr */
    12,	/* bosubi */
    12,	/* bosubr_u */
    12,	/* bosubi_u */
    12,	/* bxsubr */
    12,	/* bxsubi */
    12,	/* bxsubr_u */
    12,	/* bxsubi_u */
    8,	/* jmpr */
    8,	/* jmpi */
    8,	/* callr */
    8,	/* calli */
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
    44,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    4,	/* addr_f */
    16,	/* addi_f */
    4,	/* subr_f */
    16,	/* subi_f */
    16,	/* rsbi_f */
    4,	/* mulr_f */
    16,	/* muli_f */
    4,	/* divr_f */
    16,	/* divi_f */
    4,	/* negr_f */
    4,	/* absr_f */
    4,	/* sqrtr_f */
    16,	/* ltr_f */
    32,	/* lti_f */
    16,	/* ler_f */
    32,	/* lei_f */
    16,	/* eqr_f */
    32,	/* eqi_f */
    16,	/* ger_f */
    32,	/* gei_f */
    16,	/* gtr_f */
    32,	/* gti_f */
    16,	/* ner_f */
    32,	/* nei_f */
    16,	/* unltr_f */
    32,	/* unlti_f */
    16,	/* unler_f */
    32,	/* unlei_f */
    16,	/* uneqr_f */
    32,	/* uneqi_f */
    16,	/* unger_f */
    32,	/* ungei_f */
    16,	/* ungtr_f */
    32,	/* ungti_f */
    16,	/* ltgtr_f */
    32,	/* ltgti_f */
    16,	/* ordr_f */
    32,	/* ordi_f */
    16,	/* unordr_f */
    32,	/* unordi_f */
    12,	/* truncr_f_i */
    0,	/* truncr_f_l */
    12,	/* extr_f */
    4,	/* extr_d_f */
    4,	/* movr_f */
    16,	/* movi_f */
    4,	/* ldr_f */
    12,	/* ldi_f */
    4,	/* ldxr_f */
    8,	/* ldxi_f */
    4,	/* str_f */
    12,	/* sti_f */
    4,	/* stxr_f */
    8,	/* stxi_f */
    12,	/* bltr_f */
    24,	/* blti_f */
    12,	/* bler_f */
    24,	/* blei_f */
    12,	/* beqr_f */
    24,	/* beqi_f */
    12,	/* bger_f */
    24,	/* bgei_f */
    12,	/* bgtr_f */
    24,	/* bgti_f */
    12,	/* bner_f */
    28,	/* bnei_f */
    12,	/* bunltr_f */
    28,	/* bunlti_f */
    12,	/* bunler_f */
    28,	/* bunlei_f */
    12,	/* buneqr_f */
    28,	/* buneqi_f */
    12,	/* bunger_f */
    28,	/* bungei_f */
    12,	/* bungtr_f */
    28,	/* bungti_f */
    12,	/* bltgtr_f */
    24,	/* bltgti_f */
    12,	/* bordr_f */
    24,	/* bordi_f */
    12,	/* bunordr_f */
    28,	/* bunordi_f */
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
    24,	/* addi_d */
    4,	/* subr_d */
    24,	/* subi_d */
    24,	/* rsbi_d */
    4,	/* mulr_d */
    24,	/* muli_d */
    4,	/* divr_d */
    24,	/* divi_d */
    8,	/* negr_d */
    8,	/* absr_d */
    4,	/* sqrtr_d */
    16,	/* ltr_d */
    40,	/* lti_d */
    16,	/* ler_d */
    40,	/* lei_d */
    16,	/* eqr_d */
    40,	/* eqi_d */
    16,	/* ger_d */
    40,	/* gei_d */
    16,	/* gtr_d */
    40,	/* gti_d */
    16,	/* ner_d */
    40,	/* nei_d */
    16,	/* unltr_d */
    40,	/* unlti_d */
    16,	/* unler_d */
    40,	/* unlei_d */
    16,	/* uneqr_d */
    40,	/* uneqi_d */
    16,	/* unger_d */
    40,	/* ungei_d */
    16,	/* ungtr_d */
    40,	/* ungti_d */
    16,	/* ltgtr_d */
    40,	/* ltgti_d */
    16,	/* ordr_d */
    40,	/* ordi_d */
    16,	/* unordr_d */
    40,	/* unordi_d */
    12,	/* truncr_d_i */
    0,	/* truncr_d_l */
    16,	/* extr_d */
    4,	/* extr_f_d */
    8,	/* movr_d */
    24,	/* movi_d */
    4,	/* ldr_d */
    12,	/* ldi_d */
    4,	/* ldxr_d */
    8,	/* ldxi_d */
    4,	/* str_d */
    12,	/* sti_d */
    4,	/* stxr_d */
    8,	/* stxi_d */
    12,	/* bltr_d */
    32,	/* blti_d */
    12,	/* bler_d */
    32,	/* blei_d */
    12,	/* beqr_d */
    32,	/* beqi_d */
    12,	/* bger_d */
    32,	/* bgei_d */
    12,	/* bgtr_d */
    32,	/* bgti_d */
    12,	/* bner_d */
    36,	/* bnei_d */
    12,	/* bunltr_d */
    36,	/* bunlti_d */
    12,	/* bunler_d */
    36,	/* bunlei_d */
    12,	/* buneqr_d */
    36,	/* buneqi_d */
    12,	/* bunger_d */
    36,	/* bungei_d */
    12,	/* bungtr_d */
    36,	/* bungti_d */
    12,	/* bltgtr_d */
    32,	/* bltgti_d */
    12,	/* bordr_d */
    32,	/* bordi_d */
    12,	/* bunordr_d */
    36,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    0,	/* movr_w_f */
    0,	/* movr_ww_d */
    0,	/* movr_w_d */
    0,	/* movr_f_w */
    0,	/* movi_f_w */
    0,	/* movr_d_ww */
    0,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
#endif /* __WORDSIZE */

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
    4,	/* label */
    36,	/* prolog */
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
    28,	/* addi */
    24,	/* addcr */
    48,	/* addci */
    52,	/* addxr */
    52,	/* addxi */
    4,	/* subr */
    28,	/* subi */
    24,	/* subcr */
    48,	/* subci */
    52,	/* subxr */
    52,	/* subxi */
    32,	/* rsbi */
    4,	/* mulr */
    28,	/* muli */
    48,	/* qmulr */
    64,	/* qmuli */
    48,	/* qmulr_u */
    64,	/* qmuli_u */
    4,	/* divr */
    28,	/* divi */
    4,	/* divr_u */
    28,	/* divi_u */
    20,	/* qdivr */
    16,	/* qdivi */
    20,	/* qdivr_u */
    16,	/* qdivi_u */
    12,	/* remr */
    36,	/* remi */
    12,	/* remr_u */
    36,	/* remi_u */
    4,	/* andr */
    28,	/* andi */
    4,	/* orr */
    28,	/* ori */
    4,	/* xorr */
    28,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    16,	/* ltr */
    16,	/* lti */
    16,	/* ltr_u */
    16,	/* lti_u */
    16,	/* ler */
    16,	/* lei */
    16,	/* ler_u */
    16,	/* lei_u */
    16,	/* eqr */
    16,	/* eqi */
    16,	/* ger */
    16,	/* gei */
    16,	/* ger_u */
    16,	/* gei_u */
    16,	/* gtr */
    16,	/* gti */
    16,	/* gtr_u */
    16,	/* gti_u */
    16,	/* ner */
    16,	/* nei */
    4,	/* movr */
    24,	/* movi */
    16,	/* movnr */
    16,	/* movzr */
    24,	/* casr */
    44,	/* casi */
    8,	/* extr_c */
    4,	/* extr_uc */
    8,	/* extr_s */
    8,	/* extr_us */
    8,	/* extr_i */
    8,	/* extr_ui */
    20,	/* bswapr_us */
    52,	/* bswapr_ui */
    116,	/* bswapr_ul */
    8,	/* htonr_us */
    8,	/* htonr_ui */
    4,	/* htonr_ul */
    4,	/* ldr_c */
    24,	/* ldi_c */
    4,	/* ldr_uc */
    24,	/* ldi_uc */
    4,	/* ldr_s */
    24,	/* ldi_s */
    4,	/* ldr_us */
    24,	/* ldi_us */
    4,	/* ldr_i */
    24,	/* ldi_i */
    4,	/* ldr_ui */
    24,	/* ldi_ui */
    4,	/* ldr_l */
    24,	/* ldi_l */
    4,	/* ldxr_c */
    24,	/* ldxi_c */
    4,	/* ldxr_uc */
    24,	/* ldxi_uc */
    4,	/* ldxr_s */
    24,	/* ldxi_s */
    4,	/* ldxr_us */
    24,	/* ldxi_us */
    4,	/* ldxr_i */
    24,	/* ldxi_i */
    4,	/* ldxr_ui */
    24,	/* ldxi_ui */
    4,	/* ldxr_l */
    24,	/* ldxi_l */
    4,	/* str_c */
    24,	/* sti_c */
    4,	/* str_s */
    24,	/* sti_s */
    4,	/* str_i */
    24,	/* sti_i */
    4,	/* str_l */
    24,	/* sti_l */
    4,	/* stxr_c */
    24,	/* stxi_c */
    4,	/* stxr_s */
    24,	/* stxi_s */
    4,	/* stxr_i */
    24,	/* stxi_i */
    4,	/* stxr_l */
    24,	/* stxi_l */
    12,	/* bltr */
    12,	/* blti */
    12,	/* bltr_u */
    12,	/* blti_u */
    12,	/* bler */
    12,	/* blei */
    12,	/* bler_u */
    12,	/* blei_u */
    12,	/* beqr */
    36,	/* beqi */
    12,	/* bger */
    12,	/* bgei */
    12,	/* bger_u */
    12,	/* bgei_u */
    12,	/* bgtr */
    12,	/* bgti */
    12,	/* bgtr_u */
    12,	/* bgti_u */
    12,	/* bner */
    36,	/* bnei */
    12,	/* bmsr */
    12,	/* bmsi */
    12,	/* bmcr */
    12,	/* bmci */
    12,	/* boaddr */
    12,	/* boaddi */
    12,	/* boaddr_u */
    12,	/* boaddi_u */
    12,	/* bxaddr */
    12,	/* bxaddi */
    12,	/* bxaddr_u */
    12,	/* bxaddi_u */
    12,	/* bosubr */
    12,	/* bosubi */
    12,	/* bosubr_u */
    12,	/* bosubi_u */
    12,	/* bxsubr */
    12,	/* bxsubi */
    12,	/* bxsubr_u */
    12,	/* bxsubi_u */
    8,	/* jmpr */
    8,	/* jmpi */
    8,	/* callr */
    40,	/* calli */
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
    44,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    16,	/* addr_f */
    40,	/* addi_f */
    24,	/* subr_f */
    40,	/* subi_f */
    40,	/* rsbi_f */
    16,	/* mulr_f */
    40,	/* muli_f */
    16,	/* divr_f */
    40,	/* divi_f */
    12,	/* negr_f */
    12,	/* absr_f */
    12,	/* sqrtr_f */
    24,	/* ltr_f */
    48,	/* lti_f */
    24,	/* ler_f */
    48,	/* lei_f */
    24,	/* eqr_f */
    48,	/* eqi_f */
    24,	/* ger_f */
    48,	/* gei_f */
    24,	/* gtr_f */
    48,	/* gti_f */
    24,	/* ner_f */
    48,	/* nei_f */
    24,	/* unltr_f */
    48,	/* unlti_f */
    24,	/* unler_f */
    48,	/* unlei_f */
    24,	/* uneqr_f */
    48,	/* uneqi_f */
    24,	/* unger_f */
    48,	/* ungei_f */
    24,	/* ungtr_f */
    48,	/* ungti_f */
    24,	/* ltgtr_f */
    48,	/* ltgti_f */
    24,	/* ordr_f */
    48,	/* ordi_f */
    24,	/* unordr_f */
    48,	/* unordi_f */
    16,	/* truncr_f_i */
    16,	/* truncr_f_l */
    20,	/* extr_f */
    12,	/* extr_d_f */
    16,	/* movr_f */
    32,	/* movi_f */
    8,	/* ldr_f */
    28,	/* ldi_f */
    8,	/* ldxr_f */
    28,	/* ldxi_f */
    8,	/* str_f */
    28,	/* sti_f */
    8,	/* stxr_f */
    28,	/* stxi_f */
    20,	/* bltr_f */
    44,	/* blti_f */
    20,	/* bler_f */
    44,	/* blei_f */
    28,	/* beqr_f */
    60,	/* beqi_f */
    20,	/* bger_f */
    44,	/* bgei_f */
    20,	/* bgtr_f */
    44,	/* bgti_f */
    20,	/* bner_f */
    44,	/* bnei_f */
    20,	/* bunltr_f */
    44,	/* bunlti_f */
    20,	/* bunler_f */
    44,	/* bunlei_f */
    20,	/* buneqr_f */
    44,	/* buneqi_f */
    20,	/* bunger_f */
    44,	/* bungei_f */
    20,	/* bungtr_f */
    44,	/* bungti_f */
    20,	/* bltgtr_f */
    44,	/* bltgti_f */
    20,	/* bordr_f */
    44,	/* bordi_f */
    20,	/* bunordr_f */
    44,	/* bunordi_f */
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
    32,	/* addi_d */
    4,	/* subr_d */
    32,	/* subi_d */
    32,	/* rsbi_d */
    4,	/* mulr_d */
    32,	/* muli_d */
    4,	/* divr_d */
    32,	/* divi_d */
    4,	/* negr_d */
    4,	/* absr_d */
    4,	/* sqrtr_d */
    16,	/* ltr_d */
    48,	/* lti_d */
    16,	/* ler_d */
    48,	/* lei_d */
    16,	/* eqr_d */
    48,	/* eqi_d */
    16,	/* ger_d */
    48,	/* gei_d */
    16,	/* gtr_d */
    48,	/* gti_d */
    16,	/* ner_d */
    48,	/* nei_d */
    16,	/* unltr_d */
    48,	/* unlti_d */
    16,	/* unler_d */
    48,	/* unlei_d */
    16,	/* uneqr_d */
    48,	/* uneqi_d */
    16,	/* unger_d */
    48,	/* ungei_d */
    16,	/* ungtr_d */
    48,	/* ungti_d */
    16,	/* ltgtr_d */
    48,	/* ltgti_d */
    16,	/* ordr_d */
    48,	/* ordi_d */
    16,	/* unordr_d */
    48,	/* unordi_d */
    16,	/* truncr_d_i */
    12,	/* truncr_d_l */
    12,	/* extr_d */
    8,	/* extr_f_d */
    4,	/* movr_d */
    32,	/* movi_d */
    4,	/* ldr_d */
    24,	/* ldi_d */
    4,	/* ldxr_d */
    24,	/* ldxi_d */
    4,	/* str_d */
    24,	/* sti_d */
    4,	/* stxr_d */
    24,	/* stxi_d */
    12,	/* bltr_d */
    40,	/* blti_d */
    12,	/* bler_d */
    40,	/* blei_d */
    12,	/* beqr_d */
    40,	/* beqi_d */
    12,	/* bger_d */
    40,	/* bgei_d */
    12,	/* bgtr_d */
    40,	/* bgti_d */
    12,	/* bner_d */
    44,	/* bnei_d */
    12,	/* bunltr_d */
    44,	/* bunlti_d */
    12,	/* bunler_d */
    44,	/* bunlei_d */
    12,	/* buneqr_d */
    44,	/* buneqi_d */
    12,	/* bunger_d */
    44,	/* bungei_d */
    12,	/* bungtr_d */
    44,	/* bungti_d */
    12,	/* bltgtr_d */
    40,	/* bltgti_d */
    12,	/* bordr_d */
    40,	/* bordi_d */
    12,	/* bunordr_d */
    44,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    0,	/* movr_w_f */
    0,	/* movr_ww_d */
    0,	/* movr_w_d */
    0,	/* movr_f_w */
    0,	/* movi_f_w */
    0,	/* movr_d_ww */
    0,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
#endif /* __WORDSIZE */
