#ifndef _OPENSC_ESTEID_H
#define _OPENSC_ESTEID_H

/* personal data file record numbers */
enum {
	SC_ESTEID_PD_SURNAME = 1,
	SC_ESTEID_PD_GIVEN_NAMES1,
	SC_ESTEID_PD_GIVEN_NAMES2,
	SC_ESTEID_PD_SEX,
	SC_ESTEID_PD_CITIZENSHIP,
	SC_ESTEID_PD_DATE_OF_BIRTH,
	SC_ESTEID_PD_PERSONAL_ID,
	SC_ESTEID_PD_DOCUMENT_NR,
	SC_ESTEID_PD_EXPIRY_DATE,
	SC_ESTEID_PD_PLACE_OF_BIRTH,
	SC_ESTEID_PD_ISSUING_DATE,
	SC_ESTEID_PD_PERMIT_TYPE,
	SC_ESTEID_PD_REMARK1,
	SC_ESTEID_PD_REMARK2,
	SC_ESTEID_PD_REMARK3,
	SC_ESTEID_PD_REMARK4
};

enum {
	SC_ESTEID_AUTH = 1,
	SC_ESTEID_SIGN
};

#define SC_ESTEID_KEYREF_FILE_RECLEN	21

int select_esteid_df(sc_card_t * card);

#endif
