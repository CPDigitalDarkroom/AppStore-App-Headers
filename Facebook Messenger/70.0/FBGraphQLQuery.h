/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLCacheKeySerializer;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSSet, NSMutableDictionary, NSDictionary, NSString, NSMutableSet, NSArray;

@interface FBGraphQLQuery : NSObject {

	unordered_map<const char *, const char *, FB::CStringHasher, FB::CStringComparer, std::__1::allocator<std::__1::pair<const char *const, const char *> > >* _aliasMap;
	const char* _annotatedResultType;
	NSSet* _exportedFieldNames;
	NSMutableDictionary* _parameters;
	NSDictionary* _rawDataToUpload;
	NSString* _persistID;
	const FBGraphQLFieldSet* _queriedFieldSet;
	NSString* _queryString;
	NSMutableDictionary* _refParameterNameToExportedFieldMap;
	NSMutableDictionary* _rerunParameterNameToExportedFieldMap;
	NSMutableSet* _intentionallyOmittedParameters;
	NSMutableSet* _parametersUsingServerSidePersistedDefaultValue;
	NSArray* _paramsToIndexMappingArray;
	NSDictionary* _serverSidePersistedDefaultParameterValues;
	char _enabledStripNulls;
	char _escapeRootID;
	NSString* _rootID;
	NSString* _callName;
	NSString* _queryKey;
	int _parametersCompressibleThresholdInBytes;
	NSString* _queryName;
	NSString* _queryLabel;
	int _priority;
	id<FBGraphQLCacheKeySerializer> _cacheKeySerializer;

}

@property (nonatomic,copy,readonly) NSString * rootID;                                        //@synthesize rootID=_rootID - In the implementation block
@property (nonatomic,copy,readonly) NSString * callName;                                      //@synthesize callName=_callName - In the implementation block
@property (assign,nonatomic) int parametersCompressibleThresholdInBytes;                      //@synthesize parametersCompressibleThresholdInBytes=_parametersCompressibleThresholdInBytes - In the implementation block
@property (assign,nonatomic) char enabledStripNulls;                                          //@synthesize enabledStripNulls=_enabledStripNulls - In the implementation block
@property (assign,nonatomic) char escapeRootID;                                               //@synthesize escapeRootID=_escapeRootID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryKey;                                      //@synthesize queryKey=_queryKey - In the implementation block
@property (nonatomic,copy) NSString * queryName;                                              //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,copy) NSString * queryLabel;                                             //@synthesize queryLabel=_queryLabel - In the implementation block
@property (assign,nonatomic) int priority;                                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) id<FBGraphQLCacheKeySerializer> cacheKeySerializer;              //@synthesize cacheKeySerializer=_cacheKeySerializer - In the implementation block
+(void)setGlobalDefaultGraphQLQueryParameters;
+(id)valueForRuntimeSpecifiedDefaultGraphQLQueryParameter:(id)arg1 ;
+(id)graphQLMeQuery;
+(id)graphQLQueryWithRootID:(id)arg1 callName:(id)arg2 ;
+(id)graphQLViewerQuery;
+(void)ensureRuntimeDefaultParameters;
+(void)addRuntimeSpecifiedDefaultGraphQLQueryParameters:(id)arg1 ;
+(id)copyRuntimeSpecifiedDefaultParameters;
+(void)setRuntimeSpecifiedDefaultGraphQLQueryParameter:(id)arg1 value:(id)arg2 ;
+(void)clearDefaultGraphQLQueryParameters;
+(id)graphQLNodeQuery:(id)arg1 ;
+(id)rerunExportedFieldWithName:(id)arg1 maxReruns:(int)arg2 ;
-(NSString *)queryName;
-(id)persistID;
-(NSString *)queryKey;
-(void)setParametersCompressibleThresholdInBytes:(int)arg1 ;
-(id)rawDataToUpload;
-(void)setRawDataToUpload:(id)arg1 ;
-(const FBGraphQLFieldSet*)queriedFieldSet;
-(id<FBGraphQLCacheKeySerializer>)cacheKeySerializer;
-(id)initWithRootID:(id)arg1 callName:(id)arg2 ;
-(id)initNodeQueryWithRootID:(id)arg1 ;
-(id)exportedFieldWithName:(id)arg1 pluralMode:(unsigned)arg2 fallbackBehavior:(unsigned)arg3 ;
-(id)_parametersWithNameMappedToIndex:(id)arg1 ;
-(id)_fieldSetDescription:(const FBGraphQLFieldSet*)arg1 prefix:(id)arg2 isRecursive:(char)arg3 ;
-(id)_fieldDescription:(const FBGraphQLField*)arg1 prefix:(id)arg2 isRecursive:(char)arg3 ;
-(void)addRefParameterWithName:(id)arg1 exportedField:(id)arg2 ;
-(void)addRerunParameterWithName:(id)arg1 rerunExportedField:(id)arg2 ;
-(id)defaultValueForParameterWithKey:(id)arg1 ;
-(id)defaultParameterValues;
-(id)exportedFieldWithName:(id)arg1 ;
-(void)setQueryName:(NSString *)arg1 ;
-(const char*)annotatedResultType;
-(id)refParameterNameToExportedFieldMap;
-(id)rerunParameterNameToExportedFieldMap;
-(void)setQueryLabel:(NSString *)arg1 ;
-(id)parametersForURLRequest;
-(void)setQueriedFieldSet:(const FBGraphQLFieldSet*)arg1 ;
-(id)fieldSetDescription;
-(id)fieldSetRecursiveDescription;
-(void)setExportedFieldsWithNames:(id)arg1 ;
-(void)setPersistID:(id)arg1 ;
-(const unordered_map<const char *, const char *, FB::CStringHasher, FB::CStringComparer, std::__1::allocator<std::__1::pair<const char *const, const char *> > >*)aliasMap;
-(NSString *)callName;
-(int)parametersCompressibleThresholdInBytes;
-(char)enabledStripNulls;
-(void)setEnabledStripNulls:(char)arg1 ;
-(char)escapeRootID;
-(void)setEscapeRootID:(char)arg1 ;
-(NSString *)queryLabel;
-(void)setCacheKeySerializer:(id<FBGraphQLCacheKeySerializer>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(id)parameters;
-(void)setQueryString:(id)arg1 ;
-(id)queryString;
-(NSString *)rootID;
-(void)addParameterWithName:(id)arg1 value:(id)arg2 ;
@end

