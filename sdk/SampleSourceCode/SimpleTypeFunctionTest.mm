//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "LogMacros.h"
#include "SystemHeaderIncludes.h"
#include "SimpleTypeTest.h"

NSDictionary* SimpleTypeFunctionTest(const ValueSet& valueSet)
{
    CDP_SDK_TRACE_ENTRY_EXIT;

    NSMutableDictionary* result = [[NSMutableDictionary alloc] initWithCapacity:valueSet.entries.size()];

    for (const auto& pair : valueSet.entries)
    {
        NSObject* value = CreateNSObjectFromEntry(pair.second);
        if (value)
        {
            std::string keyStr = ToUtf8(pair.first);
            NSString* key = [NSString stringWithUTF8String:keyStr.c_str()];
            result[key] = value;
        }
        else
        {
            CDP_SDK_TRACE_WARNING("Could not convert entry to NSObject. Ignoring.", E_CDP_INVALID_DATA);
        }
    }

    return [result copy];
}