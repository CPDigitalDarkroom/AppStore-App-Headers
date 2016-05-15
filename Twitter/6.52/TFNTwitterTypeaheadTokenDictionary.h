/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTokenDictionary.h>
#import <Twitter/TFSModel.h>

@class NSString;

@interface TFNTwitterTypeaheadTokenDictionary : TFNTwitterTokenDictionary <TFSModel> {

	char _listeningForUserUpdates;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entryClasses;
+(id)typeaheadTokensWithString:(id)arg1 ;
+(id)typeaheadTokenDictionaryWithJSONData:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)_tokenizeArray:(id)arg1 withClass:(Class)arg2 ;
-(void)addUser:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didChangeRelationshipForUser:(id)arg1 ;
-(id)oneClickEntries;
-(void)endListeningForUserUpdates;
-(void)encodeToMutableData:(id)arg1 ;
-(void)beginListeningForUserUpdates;
-(void)addTypeaheadObject:(id)arg1 prioritize:(char)arg2 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)addUser:(id)arg1 ;
@end

