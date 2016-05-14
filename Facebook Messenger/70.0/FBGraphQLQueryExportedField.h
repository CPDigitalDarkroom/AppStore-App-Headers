/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLQuery, NSString;

@interface FBGraphQLQueryExportedField : NSObject {

	FBGraphQLQuery* _targetQuery;
	NSString* _exportedFieldName;
	unsigned _pluralMode;
	unsigned _fallbackBehavior;

}

@property (nonatomic,readonly) FBGraphQLQuery * targetQuery;                   //@synthesize targetQuery=_targetQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * exportedFieldName;              //@synthesize exportedFieldName=_exportedFieldName - In the implementation block
@property (nonatomic,readonly) unsigned pluralMode;                            //@synthesize pluralMode=_pluralMode - In the implementation block
@property (nonatomic,readonly) unsigned fallbackBehavior;                      //@synthesize fallbackBehavior=_fallbackBehavior - In the implementation block
-(id)initWithTargetQuery:(id)arg1 exportedFieldName:(id)arg2 pluralMode:(unsigned)arg3 fallbackBehavior:(unsigned)arg4 ;
-(FBGraphQLQuery *)targetQuery;
-(NSString *)exportedFieldName;
-(unsigned)pluralMode;
-(unsigned)fallbackBehavior;
@end

