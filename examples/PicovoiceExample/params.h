
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = привет компьютер
static const uint8_t KEYWORD_ARRAY[] = {
        0x9f, 0xc5, 0x7c, 0x5d, 0x85, 0x85, 0x5a, 0xb1, 0x37, 0x3c, 0xa4, 0xaa, 0x68, 0x10, 0x92, 0x2f, 0x72, 0x1a,
        0xab, 0x1f, 0x48, 0xd0, 0x5d, 0x0c, 0x8d, 0x4d, 0xf7, 0x6d, 0x33, 0xb7, 0x01, 0x33, 0x1a, 0x91, 0xa0, 0x8b,
        0x26, 0x38, 0x1c, 0x0b, 0x35, 0xa3, 0xcf, 0xe1, 0x46, 0x18, 0xf1, 0xce, 0xbf, 0x18, 0x08, 0xb5, 0x08, 0x28,
        0x24, 0xc7, 0x9d, 0xe3, 0xec, 0x2c, 0xdf, 0xae, 0x20, 0xd8, 0xaf, 0x2a, 0x44, 0x5c, 0x8a, 0x64, 0x10, 0x1d,
        0x4b, 0xd7, 0x03, 0x00, 0x8b, 0x6c, 0x1d, 0x54, 0xa1, 0xbc, 0xec, 0xba, 0xb7, 0x6a, 0x78, 0x11, 0xf6, 0xe5,
        0xb4, 0xb7, 0xcd, 0x36, 0xee, 0x85, 0x6d, 0x11, 0x37, 0x9f, 0xea, 0x73, 0xa0, 0xcd, 0x35, 0x31, 0xb8, 0x98,
        0xe7, 0x8e, 0xa5, 0x0e, 0x53, 0x4f, 0x6b, 0x98, 0xfd, 0x06, 0x1a, 0xf2, 0x3b, 0x1a, 0x22, 0x5c, 0x9f, 0xcd,
        0xa9, 0x96, 0x8f, 0x45, 0x87, 0x3b, 0x20, 0x1d, 0x70, 0x2d, 0xa3, 0x4c, 0x56, 0xad, 0x99, 0x41, 0xa5, 0x97,
        0xf4, 0x8f, 0xe8, 0x61, 0xa2, 0xe2, 0xb9, 0xa0, 0xd0, 0x00, 0xfd, 0xe8, 0xe8, 0x37, 0x38, 0x69, 0x82, 0x2f,
        0xee, 0x56, 0x07, 0x93, 0x4e, 0xfa, 0x7f, 0xf4, 0x2e, 0x02, 0xe1, 0x75, 0xf4, 0x4c, 0x3b, 0x68, 0xce, 0xb1,
        0x8c, 0x5a, 0xf1, 0x41, 0xca, 0x12, 0x50, 0xad, 0x6e, 0x49, 0x0f, 0x80, 0xb6, 0xf4, 0xe1, 0x4f, 0x00, 0x42,
        0x00, 0x46, 0x96, 0x82, 0x39, 0x4a, 0x9d, 0xa0, 0x14, 0x02, 0xac, 0x03, 0x7e, 0xb8, 0xd8, 0x31, 0xd4, 0x7e,
        0xfd, 0x84, 0x34, 0x8c, 0x69, 0x72, 0x78, 0x9b, 0x14, 0xae, 0xe0, 0xa0, 0x41, 0x43, 0xbc, 0x1c, 0xeb, 0x15,
        0xaf, 0xf3, 0x32, 0x37, 0xe1, 0x8b, 0x87, 0xdb, 0x08, 0xb7, 0x7c, 0xa1, 0xf5, 0x63, 0x1e, 0x05, 0x94, 0x1e,
        0xf2, 0xb8, 0x7b, 0x84, 0x44, 0x76, 0x19, 0x35, 0xdc, 0x3d, 0x97, 0x39, 0x20, 0x51, 0x45, 0x3a, 0x95, 0x91,
        0x2f, 0x02, 0x74, 0x57, 0x12, 0xef, 0xca, 0x11, 0xe4, 0xe2, 0x15, 0xbb, 0xb2, 0xd4, 0x4a, 0x4f, 0x2d, 0xa6,
        0x10, 0x50, 0x81, 0xa1, 0x1c, 0xd9, 0x07, 0x08, 0x38, 0xb4, 0xe5, 0xf4, 0xd1, 0x29, 0x75, 0xb1, 0x50, 0x94,
        0xe7, 0x15, 0x6d, 0x71, 0xff, 0x7c, 0xe5, 0xc6, 0xd5, 0xeb, 0xb1, 0x43, 0x44, 0xb9, 0x34, 0xb7, 0x21, 0x9f,
        0x9a, 0xc1, 0xbc, 0x1d, 0x1e, 0xb0, 0x12, 0x25, 0x0e, 0x22, 0x5c, 0x7a, 0xe1, 0x5c, 0x9f, 0x07, 0x2d, 0xaf,
        0x93, 0x07, 0x37, 0x53, 0x83, 0xf6, 0xb6, 0xb3, 0x9a, 0xce, 0xca, 0x1c, 0x40, 0x47, 0xf9, 0x29, 0x11, 0x07,
        0xaa, 0xd0, 0x91, 0x08, 0xd5, 0x31, 0xa1, 0x53, 0x71, 0x75, 0x74, 0x54, 0xa6, 0xfc, 0xe9, 0xc1, 0xca, 0x84,
        0x7c, 0x28, 0xb9, 0xb9, 0xa2, 0x4d, 0x34, 0xfb, 0xb1, 0x0b, 0xdd, 0x36, 0x71, 0xc5, 0x51, 0xaa, 0xa9, 0x8c,
        0xd8, 0xbf, 0x98, 0xe2, 0xea, 0x95, 0x79, 0x27, 0xcc, 0x91, 0xf8, 0x24, 0xb9, 0x04, 0x56, 0x05, 0x76, 0x78,
        0xf6, 0x9a, 0x31, 0x20, 0xed, 0x31, 0xc2, 0x58, 0x30, 0xc5, 0x6d, 0xec, 0x79, 0xe5, 0x6b, 0xc2, 0xd2, 0x16,
        0x1a, 0x47, 0x92, 0xdb, 0xe7, 0x74, 0x6a, 0xf0, 0x7c, 0x53, 0x73, 0x5f, 0x9b, 0x54, 0x62, 0x31, 0x6a, 0x25,
        0x1e, 0x4d, 0x5d, 0x97, 0xf5, 0xbc, 0xbd, 0x50, 0x9d, 0x5e, 0x81, 0x2a, 0xc4, 0xfd, 0x31, 0xd9, 0x23, 0x87,
        0x18, 0xc0, 0xa1, 0xa2, 0x0a, 0xe5, 0x1b, 0xf9, 0xce, 0xb5, 0x1a, 0x3d, 0xcd, 0xe8, 0xc6, 0xde, 0x23, 0x1d,
        0x7a, 0x08, 0x6e, 0x87, 0xaa, 0x1d, 0x3b, 0x25, 0x5d, 0x83, 0xbe, 0x2b, 0x59, 0x57, 0x89, 0xcd, 0xac, 0xa4,
        0x4c, 0xf4, 0x67, 0x3e, 0x0a, 0xf7, 0x1b, 0x28, 0x4f, 0x06, 0x3e, 0xe5, 0xb3, 0x48, 0x5a, 0xd7, 0x4f, 0x9f,
        0x90, 0x5b, 0x53, 0x1e, 0x75, 0xe3, 0x78, 0x0d, 0x25, 0xb8, 0xfe, 0x54, 0x15, 0xc5, 0xad, 0x72, 0xca, 0xb7,
        0x54, 0x39, 0xe5, 0x1b, 0x43, 0x9c, 0x72, 0x60, 0x96, 0xff, 0x8d, 0x7c, 0xb8, 0xdf, 0xe9, 0x34, 0x54, 0x3f,
        0x92, 0x68, 0x0e, 0xe1, 0xea, 0x1c, 0x4f, 0x11, 0x4b, 0xc0, 0x2b, 0xc7, 0x62, 0x75, 0xe4, 0xc2, 0xc5, 0x65,
        0xf2, 0xd2, 0xa4, 0x41, 0x93, 0xfb, 0x92, 0x14, 0x26, 0x9d, 0x0a, 0x71, 0xbe, 0x16, 0x19, 0x71, 0xd5, 0xda,
        0xf9, 0x27, 0x83, 0x06, 0x12, 0xeb, 0xeb, 0x9a, 0x18, 0x22, 0xc8, 0x88, 0x49, 0x9a, 0x3e, 0x51, 0xca, 0x1d,
        0xa2, 0x52, 0x85, 0xb9, 0xdc, 0x92, 0x8c, 0xf2, 0xbe, 0x53, 0x5f, 0x3b, 0x31, 0x39, 0x84, 0x71, 0x9a, 0x72,
        0xb6, 0xcf, 0xbf, 0x77, 0x04, 0xaa, 0x10, 0xc4, 0xa0, 0x31, 0xb9, 0x92, 0xd6, 0x97, 0x7c, 0xb8, 0x09, 0x5d,
        0xd5, 0x03, 0xad, 0x8a, 0x1b, 0x58, 0x61, 0x04, 0xbc, 0xdf, 0x6f, 0x70, 0x8f, 0xf0, 0xac, 0xe5, 0x7e, 0x22,
        0xb9, 0xf2, 0x21, 0x06, 0xd0, 0x48, 0x26, 0xcd, 0x01, 0x2b, 0x5b, 0xa7, 0x2c, 0x3a, 0xc9, 0x7f, 0x6c, 0xdd,
        0x05, 0x1a, 0x91, 0x5e, 0xa7, 0x3e, 0x53, 0x3d, 0x31, 0x86, 0xad, 0xaf, 0x4e, 0xd6, 0xfc, 0x22, 0x1d, 0xb1,
        0x05, 0x7a, 0x58, 0x05, 0x33, 0xdc, 0x3a, 0x58, 0x78, 0xcc, 0x4a, 0xbb, 0x9c, 0xb8, 0x35, 0x3d, 0xbf, 0x27,
        0x75, 0xfe, 0x3f, 0x5b
};

// context = simple_context_ru
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x72, 0x75, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x68, 0x69, 0x72, 0x73, 0x74, 0x79, 0x3a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xd0, 0xb6, 0xd0, 0xb0, 0xd0, 0xb6, 0xd0, 0xb4, 0xd0, 0xb0,
        0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x73, 0x68, 0x6f, 0x70, 0x70, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xd0, 0x94, 0xd0, 0xb0, 0xd0, 0xb9, 0x20, 0xd0, 0xbc, 0xd0,
        0xbd, 0xd0, 0xb5, 0x20, 0x24, 0xd1, 0x84, 0xd1, 0x80, 0xd1, 0x83, 0xd0, 0xba, 0xd1, 0x82, 0x3a, 0xd1, 0x84,
        0xd1, 0x80, 0xd1, 0x83, 0xd0, 0xba, 0xd1, 0x82, 0x22, 0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0xd1, 0x84, 0xd1, 0x80, 0xd1, 0x83, 0xd0, 0xba, 0xd1, 0x82, 0x3a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xd0, 0xba, 0xd0, 0xb0, 0xd1, 0x80, 0xd1, 0x82, 0xd0, 0xbe,
        0xd1, 0x84, 0xd0, 0xb5, 0xd0, 0xbb, 0xd1, 0x8c, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x22, 0xd1, 0x8f, 0xd0, 0xb1, 0xd0, 0xbb, 0xd0, 0xbe, 0xd0, 0xba, 0xd0, 0xbe, 0x22, 0x00, 0x00, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x25, 0x00,
        0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0xd0, 0x94, 0xd0, 0xb0, 0xd0, 0xb9, 0x00, 0xd0,
        0xb6, 0xd0, 0xb0, 0xd0, 0xb6, 0xd0, 0xb4, 0xd0, 0xb0, 0x00, 0xd0, 0xba, 0xd0, 0xb0, 0xd1, 0x80, 0xd1, 0x82,
        0xd0, 0xbe, 0xd1, 0x84, 0xd0, 0xb5, 0xd0, 0xbb, 0xd1, 0x8c, 0x00, 0xd0, 0xbc, 0xd0, 0xbd, 0xd0, 0xb5, 0x00,
        0xd1, 0x8f, 0xd0, 0xb1, 0xd0, 0xbb, 0xd0, 0xbe, 0xd0, 0xba, 0xd0, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00,
        0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x04, 0x01, 0x0b, 0x2b, 0x01, 0x2b, 0x04, 0x01,
        0x0c, 0x01, 0x17, 0x1b, 0x14, 0x09, 0x07, 0x0f, 0x10, 0x12, 0x07, 0x0b, 0x01, 0x02, 0x0e, 0x14, 0x0c, 0x14,
        0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xd1, 0x84, 0xd1, 0x80, 0xd1, 0x83,
        0xd0, 0xba, 0xd1, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xd1, 0x84, 0xd1, 0x80, 0xd1, 0x83,
        0xd0, 0xba, 0xd1, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x09, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x73, 0x68, 0x6f, 0x70, 0x70, 0x69, 0x6e, 0x67, 0x00, 0x74,
        0x68, 0x69, 0x72, 0x73, 0x74, 0x79, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x28, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00,
        0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x50, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    