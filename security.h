/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SECURITY_H__
#define __SECURITY_H__
 
#include <inttypes.h>
 
#define MBED_DOMAIN "f04a2b39-f0ce-46a4-8785-fab94cb0fd46"
#define MBED_ENDPOINT_NAME "712828a6-a7ac-493e-accb-aaf4fab62151"
 
const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBzjCCAXOgAwIBAgIEINgOTDAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"
"cNMTYwNjAxMTg1MjA3WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJZjA0Y\r\n"
"TJiMzktZjBjZS00NmE0LTg3ODUtZmFiOTRjYjBmZDQ2LzcxMjgyOGE2LWE3YWMt\r\n"
"NDkzZS1hY2NiLWFhZjRmYWI2MjE1MTEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAExMFnvROfU3Z9dz2389CdX\r\n"
"IuL8/kpswgTQXINwNr/31rV4khG0dVrs51CRr3RXu++EYfLee9IXrSI//se4yBH\r\n"
"mDAMBggqhkjOPQQDAgUAA0cAMEQCIADYiA0lgUXxXsSuMEWiNVkPWZQeOWtpHT9\r\n"
"YErvHiDecAiAkXi0gdPVP589jD2JIDeJrHkGARZHBj8xjOlKd4yn40g==\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQg/8jUeeOvXsibYAv3\r\n"
"exi02VCIB/gtxbW6o0mwYPC5vwOhRANCAATEwWe9E59Tdn13Pbfz0J1ci4vz+Smz\r\n"
"CBNBcg3A2v/fWtXiSEbR1WuznUJGvdFe774Rh8t570hetIj/+x7jIEeY\r\n"
"-----END PRIVATE KEY-----\r\n";
 
#endif //__SECURITY_H__