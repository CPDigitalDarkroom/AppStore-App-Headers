/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@interface TFNTwitterTLSTrustEvaluator : NSObject
+(id)defaultEvaluator;
+(char)_isSystemTrustedCertificateChain:(SecTrustRef)arg1 ;
+(char)_isPinnedCertificateChain:(SecTrustRef)arg1 ;
+(char)_isCertificateChainCached:(SecTrustRef)arg1 ;
+(char)_isPinnedSPKI:(id)arg1 ;
+(void)_cacheValidCertificateChain:(SecTrustRef)arg1 ;
+(void)_hexDecode:(const char*)arg1 decoded:(char*)arg2 ;
-(char)evaluateServerTrust:(SecTrustRef)arg1 forHost:(id)arg2 ;
@end

