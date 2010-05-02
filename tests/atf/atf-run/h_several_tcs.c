//
// Automated Testing Framework (atf)
//
// Copyright (c) 2010 The NetBSD Foundation, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND
// CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
// INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
// IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#include <atf-c.h>

ATF_TC(first);
ATF_TC_HEAD(first, tc)
{
    atf_tc_set_md_var(tc, "descr", "Description 1");
}
ATF_TC_BODY(first, tc)
{
}

ATF_TC(second);
ATF_TC_HEAD(second, tc)
{
    atf_tc_set_md_var(tc, "descr", "Description 2");
    atf_tc_set_md_var(tc, "timeout", "500");
    atf_tc_set_md_var(tc, "X-property", "Custom property");
}
ATF_TC_BODY(second, tc)
{
}

ATF_TC(third);
ATF_TC_HEAD(third, tc)
{
}
ATF_TC_BODY(third, tc)
{
}

ATF_TP_ADD_TCS(tp)
{
    ATF_TP_ADD_TC(tp, first);
    ATF_TP_ADD_TC(tp, second);
    ATF_TP_ADD_TC(tp, third);

    return atf_no_error();
}
